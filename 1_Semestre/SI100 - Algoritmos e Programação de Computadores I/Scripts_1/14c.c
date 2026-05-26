#include <stdio.h>
	int n, maior, menor;
	void proc(int vetor[]);
	int main(){
		int x;
		scanf ("%d",&n);
		int vetor[n];
		for (x=0;x<n;x++)
			scanf ("%d",&vetor[x]);
		proc(vetor);
		printf ("maior valor: %d\n",maior);
                printf ("menor valor: %d\n",menor);

return 0;
}
	void proc(int vetor[n]){
		int x;
		maior=vetor[0];
		menor=vetor[0];
		for (x=1;x<n;x++){
			if (vetor[x]>maior){
				maior=vetor[x];
}
	}
		for (x=1;x<n;x++){
			if (vetor[x]<menor){
				menor=vetor[x];
}
	}
		}
