#include <stdio.h>
#include <string.h>
int main(){
	char nome[50], esporte[50];
	int idade, medalhas;
	int idade_maior=0, medalhas_maior=0;
	char mais_velho[50], mais_medalhas[50];
	FILE *arq;

	arq=fopen("atletas.txt","r");
	if (arq==NULL){
		perror("Erro ao abrir o arquivo\n");
	}

	while(fscanf(arq,"%s %s %d %d",&nome,&esporte,&idade,&medalhas)!=EOF){
		if(idade_maior<idade){
			idade_maior=idade;
			strcpy(mais_velho,nome);
		}
		if(medalhas_maior<medalhas){
			medalhas_maior=medalhas;
			strcpy(mais_medalhas,nome);
		}
	}
	printf ("Com %d anos, o atleta mais velho é o %s.\n", idade_maior, mais_velho);
	printf ("Com %d medalhas, o atleta com mais medalhas é o %s.\n", medalhas_maior, mais_medalhas);
fclose(arq);
return 0;
}
