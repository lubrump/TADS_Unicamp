#include <stdio.h>
int soma(int i){
	if (i==0){
		return 0;
	}
	return i+soma(i-1);
}
int main(){
	int i;
	printf ("Digite um número: ");
	scanf ("%d",&i);
	printf ("A soma de 1 a %d é: %d\n", i, soma(i));
return 0;
}
