#include <stdio.h>
int main(){
	int anos, cont=0;
	float taxa, valor, montante, i=1;

	printf ("Digite o tempo de investimento (em anos): ");
	scanf("%d", &anos);

	printf ("Digite a taxa de retorno (anual): ");
	scanf("%f", &taxa);

	printf ("Digite o valor investido: ");
	scanf("%f", &valor);

	while (cont<anos){
		i=i*(1+taxa/100);
		cont++;
	}
	montante=valor*i;
	float juros=montante-valor;

	printf ("Montante final: %.2f\n", montante);
	printf ("Juros obtidos com o investimento: %.2f\n", juros);
return 0;
}
