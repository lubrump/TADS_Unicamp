	#include <stdio.h>
int main (){
	float notas [20];
	int n;
	float x;
	for (n=0;n<20;n++)
		scanf ("%f",&notas[n]);
	while (1) {
		n=0;
		scanf("%f",&x);
		if (x<0)
			break;
		while ((notas[n]!=x) && (n<20))
			n++;

		if (n<20)
			printf ("existe\n");
		else 
			printf ("nao existe\n");
	}
return 0;
}
