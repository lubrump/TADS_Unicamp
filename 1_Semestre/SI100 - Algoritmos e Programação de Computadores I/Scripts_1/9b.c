#include <stdio.h>
int main (){
float quant [10];
float val [10];
float valor=0;
int quantidade=0;
int q;
	for (q=0;q<10;q++){
		scanf ("%f",&quant[q]);
                quantidade=quantidade+quant[q];
}
	for (q=0;q<10;q++){
		scanf ("%f", &val[q]);
                valor=valor+quant[q]*val[q];
}
	printf ("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", valor,quantidade);
return 0;
}
