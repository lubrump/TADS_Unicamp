#include <stdio.h>
int calcula_fatorial(int num){
	int fat=1;
	int i,j;
	for(i=num;i>0;i--){
		fat=fat*i;
	}
	return fat;
}
int main(){
	int num;

	printf ("Digite um número: ");
	scanf("%d", &num);
	int res=calcula_fatorial(num);
	printf ("%d\n", res);
return 0;
}
