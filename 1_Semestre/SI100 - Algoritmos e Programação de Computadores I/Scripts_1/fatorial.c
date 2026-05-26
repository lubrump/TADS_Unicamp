#include <stdio.h>
	int main (){
	int nump;
	int nums;
	int numr;
	int p;
	int s;
	int r;
	while (1){
		scanf ("%d",&p);
		scanf ("%d",&s);
		nump = 1;
		nums = 1;
		numr = 1;
		r = p-s;
		while (p>1)
			nump*=p--;
		while (s>1)
			nums*=s--;
		while (r>1)
			numr*=r--;
		printf ("%d\n",nump/(nums*numr));
		break;
}
	return 0;
}

