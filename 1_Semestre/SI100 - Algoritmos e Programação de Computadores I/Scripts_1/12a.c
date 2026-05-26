#include <stdio.h>
#include <math.h>
	int main(){
		struct ponto{
			float x1,y1,x2,y2;
			float euc, pot1, pot2;
			} p;
		scanf ("%f %f",&p.x1,&p.y1);
		scanf ("%f %f",&p.x2,&p.y2);
		p.pot1=pow(p.x2-p.x1,2);
		p.pot2=pow(p.y2-p.y1,2);
		p.euc=sqrt(p.pot1+p.pot2);
		if (p.euc<0000000.1){
			printf ("os pontos sao iguais\n");
}		else{
			printf ("os pontos nao sao iguais\n");
}
return 0;
} 
