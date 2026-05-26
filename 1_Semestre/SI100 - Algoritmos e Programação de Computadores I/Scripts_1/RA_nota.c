#include <stdio.h>
int main(){
	int ra;
	float nota;
	FILE *arquivo;
	arquivo=fopen("notas.txt","r");

	if(arquivo==NULL){
		perror("Erro ao abrir o arquivo\n");
		return 1;
	}
	while(fscanf(arquivo,"%d %f", &ra, &nota)!=EOF){
		printf ("RA: %d Nota: %.2f\n", ra, nota);
	}
fclose(arquivo);
return 0;
}
