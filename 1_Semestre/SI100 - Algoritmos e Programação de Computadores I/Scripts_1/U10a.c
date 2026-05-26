#include <stdio.h>
	int main (){
		int a,b,c,l;
		int matriz[20][20];
		scanf ("%d", &a);
		scanf ("%d", &b);
		for (l=0;l<a;l++)
			for (c=0;c<b;c++)
				scanf ("%d",&matriz[l][c]);
		for (l=0;l<b;l++){
			for (c=0;c<a;c++){
				printf ("%d ",matriz[c][l]);
}				printf ("\n");
}

return 0;
}
