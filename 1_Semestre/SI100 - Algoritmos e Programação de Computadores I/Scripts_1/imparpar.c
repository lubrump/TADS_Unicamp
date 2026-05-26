#include <stdio.h>
int main () {
	int num;
	int par=0;
	int impar=0;
	int c;
	for (c=0;c<10;c++){
	scanf ("%d",&num);
	if (num%2==0){
	par++;
}	else{
	impar++;
}
}	printf ("%d pares, %d impares\n",par,impar);
return 0;
}
