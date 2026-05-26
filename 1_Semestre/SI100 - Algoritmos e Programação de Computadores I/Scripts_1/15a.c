#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main(){
		int n,p;
		float x,res=0;
		float* vetor;
		scanf ("%d",&p);
		p++;
		vetor=(float*)malloc(p*sizeof(float));
			for (n=0;n<p;n++){
				scanf ("%f",&vetor[n]);
}
		scanf ("%f",&x);
			res=vetor[0];
			for (n=1;n<p;n++){
				res=res+pow(x,n)*vetor[n];
}
			printf ("%.2f\n",res);
return 0;
}
