#include <stdio.h>
int main(){
        float preco1, preco2, preco3;
        printf ("Digite o preço do primeiro fornecedor: ");
        scanf ("%f",&preco1);
        printf ("Digite o preço do segundo fornecedor: ");
        scanf ("%f",&preco2);
        printf ("Digite o preço do terceiro fornecedor: ");
        scanf ("%f",&preco3);
        float caro=preco1;
        float barato=preco1;
        if (caro<preco2){
                caro=preco2;
        }
        if (caro<preco3){
                caro=preco3;
        }
        if (barato>preco2){
                barato=preco2;
        }
        if (barato>preco2){
                barato=preco3;
        }
        printf ("O preço mais alto foi: R$%.2f\n",caro);
        printf ("O preço mais baixo foi: R$%.2f\n",barato);
return 0;
}
