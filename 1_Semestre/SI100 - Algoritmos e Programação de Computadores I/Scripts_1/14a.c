#include <stdio.h>
#include <math.h>
	void proc(int num[10], int cubo[10]);
	int main(){
		int n;
		int num[10];
		int cubo[10];
		for(n=0;n<10;n++){
			scanf ("%d",&num[n]);
			proc(num, cubo);
}
		for(n=0;n<10;n++){
			printf ("%d\n",cubo[n]);
}
return 0;
	}
	void proc(int num[10], int cubo[10]){
		int n;
		for (n=0;n<10;n++){
			cubo[n]=pow(num[n],3);
	}
}
