#include <stdio.h>
int main(){
	int i, j;
	FILE *arq;

	arq=fopen("tabela_multiplicacao.txt","w");
	if(arq==NULL){
		perror("Erro ao abrir o arquivo\n");
	}

	for(i=1;i<11;i++){
		for(j=0;j<11;j++){
			fprintf (arq,"%d x %d = %d\n",i,j,i*j);
		}
			fprintf (arq,"\n");
	}
	printf ("Tabela gravada!\n");
fclose(arq);
return 0;
}
