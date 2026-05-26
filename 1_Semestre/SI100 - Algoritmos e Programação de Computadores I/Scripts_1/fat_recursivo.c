#include <stdio.h>
int fat(int i){
	if (i==0 || i==1){
		return 1;
	}
	return i * fat (i-1);
}
int main(){
	int i;

	printf ("Digite um número: ");
	scanf ("%d", &i);
	printf ("O fatorial do número %d é: %d\n", i, fat(i));
return 0;
}
