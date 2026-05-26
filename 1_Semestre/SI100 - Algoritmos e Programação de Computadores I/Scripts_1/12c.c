#include <stdio.h>
#include <string.h>
	int main(){
			struct corpo{
			float altura, peso, imc;
			char nome[50];
			} pessoa;
		scanf ("%f",&pessoa.altura);
		scanf ("%f",&pessoa.peso);
		scanf ("%s",pessoa.nome);
		pessoa.imc=pessoa.peso/(pessoa.altura*pessoa.altura);
		printf ("%.3f\n",pessoa.imc);
return 0;
}
