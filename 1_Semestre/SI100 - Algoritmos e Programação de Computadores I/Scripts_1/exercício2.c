#include <stdio.h>
	int main(){
	int i,j,k,l,n;
		scanf("%d",&i);
		scanf("%d",&j);
		scanf("%d",&k);
		scanf("%d",&l);
		if(i>j && i>k && i>l){
			n=j+k+l;
			printf ("%d\n",n);
}		else if(j>i && j>k && j>l){
			n=i+k+l;
	                printf ("%d\n",n);
}		else if(k>i && k>j && k>l){
			n=i+j+l;
	                printf ("%d\n",n);
}		else if(l>i && l>j && l>k);{
			n=i+j+k;
	                printf ("%d\n",n);
}
return 0;
}
