#include <stdio.h>
#include <string.h>
#define BLOCO 10

typedef struct{
    int id;
    char nomeProduto[30];
    float preco;
    int ativo;
}ProdutoCafeteria;

void cadastrar();
void consultar();
void excluir();
int gerenciar(int (*funcoes)()){
    return funcoes();
}

int main(){
    int escolha;
    void (*funcoes[])()={cadastrar, consultar, excluir};

    printf("*Sistema de Gerenciamento de Cafeteria*\n");
    printf("(0) Cadastrar produto\n");
    printf("(1) Consultar registro de produto\n");
    printf("(2) Excuir registro\n");
    printf("(3) Sair\n");
    printf("\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", &escolha);
    printf("\n");
    
    if(escolha<0 || escolha>3){
        printf("\n");
        printf("Escolha uma opção válida!\n");
        return 1;
    }
    
    funcoes[escolha]();
    
return 0;
}

void cadastrar(){
    FILE *arq = fopen("cafe.bin", "ab");
    if (arq==NULL){
        perror("Erro ao abrir o arquivo!\n");
        return;
    }
    
    ProdutoCafeteria novo;
    
    printf("Digite o id do produto:\n");
    scanf("%d", &novo.id);
    printf("Digite o nome do produto:\n");
    scanf("%s", &novo.nomeProduto);
    printf("Digite o preco do produto: \n");
    scanf("%f", &novo.preco);
    novo.ativo=1;
    
    fwrite(&novo, sizeof(ProdutoCafeteria), 1, arq);
    printf("Produto cadastrado com sucesso!\n");
    fclose(arq);
}
    
void consultar(){
    FILE *arq = fopen("cafe.bin", "rb");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    
    ProdutoCafeteria registros[BLOCO];
    size_t registros_lidos;
    int encontrados=0;
    
    while((registros_lidos=fread(registros,sizeof(ProdutoCafeteria), BLOCO, arq))>0){
        printf("PRODUTOS CADASTRADOS:\n");
        for(size_t i=0; i<registros_lidos; i++){
            if(registros[i].ativo){
                printf("*PRODUTO*\n");
                printf("ID: %d\n", registros[i].id);
                printf("Nome: %s\n", registros[i].nomeProduto);
                printf("Preço: %.2f\n", registros[i].preco);
                printf("\n");
                encontrados++;
            }
        }
    }    
    if (encontrados==0){
        printf("Nenhum produto foi cadastrado.\n");
    }    
    fclose(arq);
}

void excluir(){
    FILE *arq = fopen("cafe.bin", "rb+");
    if (arq==NULL){
        perror ("Erro ao abrir o arquivo!\n");
        return;
    }
    char nome_comp[30];
    printf("Digite o nome do produto que deseja excluir:\n");
    scanf ("%s", nome_comp);
    printf("\n");
    
    ProdutoCafeteria registros[BLOCO];
    size_t registros_lidos;
    
    
    while((registros_lidos=fread(registros, sizeof(ProdutoCafeteria), BLOCO, arq))>0){
        for(size_t i=0;i<registros_lidos;i++){
            if(strcmp(registros[i].nomeProduto, nome_comp)==0 && registros[i].ativo){
                registros[i].ativo=0;
                
                fseek(arq, -(sizeof(ProdutoCafeteria) * (long)registros_lidos), SEEK_CUR);
                fwrite(registros, sizeof(ProdutoCafeteria), registros_lidos, arq);
                printf("Registro '%s' excluído\n", registros[i].nomeProduto);
                fclose(arq);
                return;
            }
        }
    }
    printf("Produto '%s' não encontrado!\n", nome_comp);
    fclose(arq);
}

