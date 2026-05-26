#include <stdio.h>
int pot(int x, int y){
	if (y==0){
		return 1;
	}
	else if (y==1){
		return x;
	}
	else {
		return x * pot(x, y-1);
	}
}
int main(){
	int x, y;

	printf ("Digite um número e sua potência:\n");
	scanf ("%d\n%d", &x, &y);
	printf ("O resultado de %d elevado a %d é: %d\n", x, y, pot(x,y));
return 0;
}
