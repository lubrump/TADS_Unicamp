#include <stdio.h>
int main(){
	float preco1, preco2, preco3;

	scanf("%f", &preco1);
	scanf("%f", &preco2);
	scanf("%f", &preco3);
	float mais_caro=preco1;
	float mais_barato=preco1;
	if(preco2>preco1 && preco2>preco3){
		mais_caro=preco2;
	}
	else if(preco3>preco2 && preco3>preco1){
		mais_caro=preco3;
	}
	if(preco2<preco1 && preco2<preco3){
		mais_barato=preco2;
	}
	else if(preco3<preco1 && preco3<preco2){
		mais_barato=preco3;
	}
	printf ("O produto mais caro custa: R$%.2f\n", mais_caro);
	printf ("O produto mais barato custa: R$%.2f\n", mais_barato);
return 0;
}
