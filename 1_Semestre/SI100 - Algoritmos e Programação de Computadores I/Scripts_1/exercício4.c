#include <stdio.h>
	int main(){
	int n, c, t;
	scanf("%d",&n);
	scanf("%d",&c);
	scanf("%d",&t);
		if (t==c || t>c){
	printf ("número da sala:%d,capacidade:%d,cadeiras ocupadas:%d, lotada\n",n,c,t);
}		else{
        printf ("número da sala:%d,capacidade:%d,cadeiras ocupadas:%d, disponível\n",n,c,t);
}
return 0;
}
