#include <stdio.h>
void exibir_menu(){
	printf ("1- Converter Celsius para Fahrenheit\n");
	printf ("2- Converter Fahrenheit para Celsius\n");
	printf ("3- Sair\n");
}
void exibir_resultado(float res, char temp){
	printf ("A temperatura convertida é: %.1f graus %c\n", res, temp);
	printf ("\n");
}
float conversao_CpF(float c){
	float res=0;
	res=(c*1.8)+32;
	return res;
}
float conversao_FpC(float f){
	float res=0;
	res=(f-32)*(5.0/9.0);
	return res;
}
int main(){
	int opcao;
	float c, f;

	while (1){
		exibir_menu();

		scanf("%d", &opcao);

		if (opcao==1){
			printf ("Digite o grau em Celsius: ");
			scanf("%f", &c);

			exibir_resultado(conversao_CpF(c),'F');
		}
		else if (opcao==2){
			printf ("Digite a temperatura em Fahrenheit: ");
			scanf("%f", &f);

			exibir_resultado(conversao_FpC(f), 'C');
		}
		else if (opcao==3){
			break;
		}
	}
return 0;
}
