#include <stdio.h>
int main(){
int num1[10];
int num2[10];
int num3[20];
int n;
	for (n=0;n<10;n++){
		scanf ("%d",&num1[n]);
}	for (n=0;n<10;n++){
		scanf ("%d",&num2[n]);
}	for (n=0;n<10;n++){
		num3[n*2]=num1[n];
		num3[n*2+1]=num2[n];
}
	for (n=0;n<20;n++){
		printf ("%d|",num3[n]);
}		printf ("\n");
return 0;
}
