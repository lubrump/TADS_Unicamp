#include <stdio.h>
	int main(){
	char forma, cone, cilíndro, esfera;
	float r,g,área,vol,r2,h,al,ab,ab2,h2;
	printf ("escolha uma opção: cone, cilíndro ou esfera:\n");
	scanf("%s",&forma);
		if (forma, "cone"){
			printf ("para calcular a área, insira os valores do raio e da geratriz, respectivamente\n");
			scanf("%f",&r);
			scanf("%f",&g);
				área=3.14*r*(g+r);
			printf ("para calcular o volume, insira os valores do raio e da altura, respectivamente\n");
			scanf("%f",&r2);
			scanf("%f",&h);
				vol=0.33*3.14*(r2*r2)*h;
			printf ("a área é: %f\n",área);
			printf ("o volume é: %f\n",vol);
}		else if(forma, "cilíndro"){
                        printf ("para calcular a área, insira os valores da área lateral, área da base, raio e altura, respectivamente\n");
			scanf("%f",&al);
			scanf("%f",&ab);
			scanf("%f",&r);
			scanf("%f",&h);
				área=2*ab+al;
			printf ("para calcular o volume, insira os valores da área da base e da altura, respectivamente\n");
			scanf("%f",&ab);
			scanf("%f",&h2);
				vol=ab*h2;
                        printf ("a área é: %f\n",área);
                        printf ("o volume é: %f\n",vol);

}		else if(forma, "esfera"){
			printf ("para calcular a área, insira o valor do raio\n");
			scanf("%f",&r);
				área=4*3.14*(r*r);
                        printf ("para calcular o volume, insira o valor do raio\n");
			scanf("%f",&r2);
				vol=(4*3.14*(r2*r2*r2))/3;
                        printf ("a área é: %f\n",área);
                        printf ("o volume é: %f\n",vol);
}
return 0;
}
