#include <stdio.h>
#include <string.h>
int main(){
	struct dados_banda{
		char nome[50];
		char tipo[50];
		int integ;
		float seg_tt, ouv_spty;
	};
	struct dados_banda banda[5];
	char buscar[50];

	for (int i=0;i<5;i++){
		printf ("Dados %d° banda:\n", i+1);

		getchar();

		printf ("Digite o nome da banda: ");
		fgets(banda[i].nome,50,stdin);
		banda[i].nome[strcspn(banda[i].nome, "\n")] = '\0';

		printf ("Digite o tipo de música: ");
		fgets(banda[i].tipo,50,stdin);
		banda[i].tipo[strcspn(banda[i].tipo, "\n")] = '\0';

		printf ("Digite a quantidade de integrantes: ");
		scanf("%d", &banda[i].integ);

		printf ("Digite o número de seguidores no twitter: ");
		scanf("%f", &banda[i].seg_tt);

		printf ("Digite o número de ouvintes no spotify: ");
		scanf("%f", &banda[i].ouv_spty);

		printf ("\n");
	}
	int num_seg=0, num_ouv=0;
	char mais_seg[50];
	char mais_ouv[50];

	getchar();

	printf ("Digite um tipo de música: ");
	fgets(buscar,50,stdin);
	buscar[strcspn(buscar,"\n")] = '\0';

	for(int i=0;i<5;i++){
		if(strcmp(banda[i].tipo,buscar)==0){
			printf ("\nNome: %s\nNúmero de integrantes: %d\nSeguidores Twitter: %.0f\nOuvintes Spotify: %.0f\n",
banda[i].nome, banda[i].integ, banda[i].seg_tt, banda[i].ouv_spty);
		}
		if (banda[i].seg_tt>num_seg){
			strcpy(mais_seg, banda[i].nome);
			num_seg=banda[i].seg_tt;
		}
		if (banda[i].ouv_spty>num_ouv){
			strcpy(mais_ouv, banda[i].nome);
			num_ouv=banda[i].ouv_spty;
		}
	}
	printf ("\nA banda com mais seguidores no twitter é: %s\n", mais_seg);
	printf ("A banda com mais ouvintes no spotify é: %s\n", mais_ouv);
return 0;
}
