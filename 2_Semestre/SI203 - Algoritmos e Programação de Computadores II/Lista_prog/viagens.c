#include <stdio.h>
int main(){
	int quant, i;
	float total=0;

	printf ("Quantas cidades você já visitou?: ");
	scanf("%d", &quant);

	char cidades[quant][30];
	float valores[quant];

	for(i=0;i<quant;i++){
		printf ("Digite o nome da %d° cidade: ",i+1);
		scanf("%s", cidades[i]);

		printf ("Digite o valor gasto na %d° cidade: ",i+1);
		scanf("%f", &valores[i]);
	}
	int mais_cara=0, mais_barata=0;
	int maior=0, menor=9999;

	for(i=0;i<quant;i++){
		if (valores[i]<menor){
			menor=valores[i];
			mais_barata=i;
		}
		if (valores[i]>maior){
			maior=valores[i];
			mais_cara=i;
		}
	}

	for(i=0;i<quant;i++){
		total=total+valores[i];
	}

	printf ("A cidade mais cara visitada foi: %s\n", cidades[mais_cara]);
	printf ("A cidade mais barata visitada foi: %s\n", cidades[mais_barata]);
	printf ("O valor total gasto nas viagens foi: %.2f\n", total);
return 0;
}
