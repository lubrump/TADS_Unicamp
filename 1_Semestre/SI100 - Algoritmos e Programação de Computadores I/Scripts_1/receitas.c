#include <stdio.h>
	int main (){
		typedef struct hora{
			int hora, minuto, segundo;
		}tempo;

		typedef struct cont{
			char* placa[5];
			char* marca[5];
			tempo entrada, saída;
		}controle;
		int n;
		int res[5];
		while (n<6){
			n=0;
			controle carro[5];
			printf ("escreva a placa do carro:\n");
				fgets(carro[n].placa,7,stdin);
			printf ("escreva a marca do carro:\n");
				fgets(carro[n].marca,50,stdin);
			printf ("instante de entrada:\n");
				scanf ("%d",&carro[n].entrada);
			printf ("instante de saída:\n");
  				scanf ("%d",&carro[n].saída);
			res[n]=carro[n].saída-carro[n].entrada;
			n++;
		}
		for (n=0;n<5;n++){
			printf ("%s, %s, %d\n",carro[n].placa,carro[n].marca,res[n]);
		}
return 0;
}
