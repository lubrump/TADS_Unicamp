#include <stdio.h>
int main (){
float quant [10];
float val [10];
int quantidade;
float valor;
int q;
int v;
	for (q=0;q<10;q++)
		scanf ("%d", quant[q]);
	for (v=0;v<10;v++)
		scanf ("%f", val[v]);
	for (q=0,v=0;v<20,q<20;v++,q++)
		quantidade+=quant[q];
		valor=quantidade*val[v];
	printf ("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %v\n", valor,quantidade);
return 0;
}
