#include <stdio.h>
#include <stdlib.h>
int main(){
        int tam, tam2, i, r, *vet;
        printf ("Digite o tamanho do vetor: ");
        scanf ("%d", &tam);

        vet = malloc(tam*sizeof(int));

        printf ("Digite os elementos do vetor:\n");
        if (vet){
                for(i=0; i<tam; i++){
                        scanf("%d", &vet[i]);
                }
        }
        else {
                printf ("Erro ao alocar a memória\n");
        }

        printf ("Seu vetor: ");
        for (i=0; i<tam; i++){
                printf ("%d ", vet[i]);
        }
        printf ("\n");

        printf ("Deseja realocar memória?:\n");
        printf ("(1) Sim\n(2) Não\n");
        scanf("%d", &r);

        if (r==1){
                printf ("Digite o novo tamanho: ");
                scanf ("%d", &tam2);
                vet = realloc(vet, tam2);

                printf ("Digite os novos componentes do vetor:\n");
                for (i=tam; i<tam2; i++){
                    scanf("%d", &vet[i]);
                }
                printf ("Seu vetor realocado: ");
                for (i=0; i<tam; i++){
                    printf ("%d ", vet[i]);
                }
                for (i=tam; i<tam2; i++){
                    printf ("%d ", vet[i]);
                }
            printf ("\n");
        }
        else if (r==2){
            printf ("Tá bom :)\n");
        }
        else if (r != 1 || r != 2){
                printf ("Digite uma opção válida\n");
        }
return 0;
}
