#include <stdio.h>
int ra, busc;
float nota;
FILE *arquivo;
void exibir_notas(){
	while (fscanf(arquivo,"%d" "%f",&ra,&nota) != EOF){
		printf ("Notas dos alunos:\nRA: %d Nota: %.1f\n",ra,nota);
	}
}
void calcular_media(){
	int i;
	float media;
        while (fscanf(arquivo,"%d" "%f",&ra,&nota) != EOF){
        	printf ("Notas dos alunos:\nRA: %d Nota: %.1f\n",ra,nota);
		media=nota+media;
	}
	media=media/3;
	printf ("Média da turma: %.2f\n", media);
}
void localizar_nota(){
	int num=0;
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
}
int main(){
        int opcao;
        arquivo=fopen("notas.txt", "r");
        if (arquivo == NULL){
                perror("Erro ao abrir o arquivo\n");
                return 1;
        }
        printf("(1) Exibir todas as notas e RAs\n(2) Calcular média da turma\n(3) Localizar a nota por RA\nDigite uma opção: ");
        scanf("%d",&opcao);
        if (opcao==1){
                exibir_notas();
        }
        else if (opcao==2){
		calcular_media();
        }
        else if (opcao==3){
                localizar_nota();
        }
fclose(arquivo);
return 0;
}
