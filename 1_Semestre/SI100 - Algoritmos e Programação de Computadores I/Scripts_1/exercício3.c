#include <stdio.h>
	int main(){
	int x, y;
	scanf("%d",&x);
		if (x<1){
			y=x;
			printf ("o valor de y é %d\n",y);
}		else if (x==1){
			y=0;
			printf ("o valor de y é %d\n",y);
}		else if (x>1){
			y=x*x;
			printf ("o valor de y é %d\n",y);
}
return 0;
}
