#include <stdio.h>
	int main(){
		int tp;
		int atual,n,c,l,tempo=0;
		int prox;		//próxima casa a ser visitada
		int casas=1;		//contador de casas visitadas
		int matriz[6][6];
		int visitados[6];
		scanf ("%d",&n);	//fazendo a leitura do número de visitas
		for (l=0;l<n+1;l++){
			for (c=0;c<n+1;c++){
				scanf ("%d", &matriz[l][c]);	//leitura da matriz
}
}		printf ("0");	//imprimindo o centro de operações
		visitados[0]=1;	//marcando o centro de operações como visitado 
		atual=0;	//posição atual agora é o centro
		while (casas<=n){
			prox=-1;
			tp=10000;	//valor alto para comparar
			for (c=1;c<=n;c++){
				if(atual!=c && matriz[atual][c]<tp && !visitados[c]){
					prox=c;
					tp=matriz[atual][c];
}
}
	tempo=tempo+matriz[atual][prox];
	printf (" -> %d", prox);
	visitados[prox]=1;
	atual=prox;
	casas++;
}
	tempo=tempo+matriz[atual][0];	//volta para o centro de operações
	printf (" -> 0\n");
	printf ("%d\n", tempo);
return 0;
}
