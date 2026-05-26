#include <stdio.h>
int add (int a, int b){
	return a + b;
}
int subtract (int a, int b){
	return a - b;
}
int multiply (int a, int b){
	return a * b;
}
int divide (int a, int b){
	return a / b;
}

int calcular(int a, int b, int(*operacoes)(int, int)){
	return operacoes(a, b);
}

int main(){
	int a, b, escolha, res;

	int (*operacoes[])(int, int)={add, subtract, multiply, divide};

	printf ("Escolha uma operação: \n");
	printf ("0 - Adicao\n");
	printf ("1 - Subtracao\n");
	printf ("2 - Multiplicacao\n");
	printf ("3 - Divisao\n");
	printf ("Digite sua escolha: ");

	scanf("%d", &escolha);
	if (escolha < 0 || escolha > 3){
		printf ("Escolha uma das opções acima!\n");
	}
	printf ("Digite dois números inteiros: ");
	scanf("%d %d", &a &b);

	res = calcular (a, b, operacoes[escolha]);
	printf ("Resultado: %d\n", res);
return 0;
}
