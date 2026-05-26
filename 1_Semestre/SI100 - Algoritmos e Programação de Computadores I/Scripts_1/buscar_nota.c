#include <stdio.h>
int main(){
	int num, ra, busc;
	float nota;
	FILE *arquivo;

	arquivo=fopen("notas.txt","r");
	if(arquivo==NULL){
		perror("Erro ao abrir o arquivo\n");
		return 1;
	}
        printf ("digite o RA a ser buscado: ");
        scanf ("%d", &busc);
        while(fscanf (arquivo, "%d" "%f", &ra, &nota)!=EOF){
                if (ra==busc){
                        num=1;
                        printf ("Nota do RA %d: %.2f\n",ra,nota);
                }
        }
                if (num==0){
                        printf ("Este RA não está cadastrado\n");
                }

fclose(arquivo);
return 0;
}
