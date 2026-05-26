#include <stdio.h>
int main(){
	int idade, medalhas;
	char nome[30], esporte[30];
	FILE *arquivo;

	arquivo=fopen("atletas.txt","r");
	if(arquivo==NULL){
		perror("Erro ao abrir o arquivo\n");
	}
	while(fscanf(arquivo,"%s" "%s" "%d" "%d",&nome, &esporte, &idade, &medalhas)!=EOF){
	printf ("%s:\n Esporte: %s\n %d anos, %d medalhas\n", nome, esporte, idade, medalhas);
}
fclose(arquivo);
return 0;
}
