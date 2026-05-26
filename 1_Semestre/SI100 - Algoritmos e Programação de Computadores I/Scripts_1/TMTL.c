#include <stdio.h>
int main (){
	int num;
	int milhar;
	int centena;
 	int dezena;
	int unidade;
	int resposta;
	scanf ("%d",&num);

	while (1){
		if (num==-1 || num>9999){
			break;
}		else if (num<10 && num>-1){
				unidade=num*1;
				resposta=unidade*1;
}		else if(9<num && num<100){
				dezena=num/10;
				unidade=num%10;
				resposta=dezena*2+unidade*1;
}		else if(99<num && num<1000){
				centena=num/100;
				dezena=(num%100)/10;
                                unidade=num%10;
				resposta=centena*6+dezena*2+unidade*1;
}		else if(999<num && num<10000){
				milhar=num/1000;
				centena=(num%1000)/100;
                                dezena=(num%100)/10;
                                unidade=num%10;
                                resposta=milhar*24+centena*6+dezena*2+unidade*1;

}
				printf ("%d\n", resposta);
			        scanf ("%d",&num);

}
return 0;
}
