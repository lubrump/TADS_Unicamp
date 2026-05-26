#include <stdio.h>
int main(){
	int i,j,n,idade;
	char nome[30];
	float nota;
	FILE *arq;

	arq=fopen("estudantes.txt","w");
	if(arq==NULL){
		perror("Erro ao abrir o arquivo\n");
	}

	for(i=0;i<5;i++){

		printf ("Nome do %d° estudante: ", i+1);
		scanf("%s", nome);

		printf ("Idade do %d° estudante: ", i+1);
		scanf("%d", &idade);

		printf ("Nota do %d° estudante: ", i+1);
		scanf("%f", &nota);

		fprintf(arq,"Nome do estudante: %s\n", nome);
		fprintf(arq,"Idade do estudante: %d\n", idade);
		fprintf(arq,"Nota do estudante: %.2f\n", nota);
		fprintf(arq,"\n");
	}

	printf("Os dados foram gravados!\n");
fclose(arq);
return 0;
}
