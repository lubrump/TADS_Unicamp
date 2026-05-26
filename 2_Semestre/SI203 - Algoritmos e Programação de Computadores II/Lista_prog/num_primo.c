#include <stdio.h>
int verifica_primo(int i){
	int cont=0,j;
	for (j=1;j<i+1;j++){
		if(i%j==0){
			cont++;
		}
	}
	if(cont==2 || cont==1){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int i;

	printf ("Digite um número: ");
	scanf("%d",&i);
	verifica_primo(i);

	if(verifica_primo(i)==1){
		printf ("%d é um número primo\n", i);
	}
	else{
		printf ("%d não é um número primo\n", i);
	}
return 0;
}
