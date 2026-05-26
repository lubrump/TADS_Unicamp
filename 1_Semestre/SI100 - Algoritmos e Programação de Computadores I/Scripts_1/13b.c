#include <stdio.h>
#include <math.h>
	float media(float n1, float n2, char l);
	int main(){
		float n1,n2,m;
		char l;
		scanf ("%c",&l);
		scanf ("%f %f",&n1,&n2);
		m=media(n1,n2,l);
		printf ("%.3f\n",m);
return 0;
}
	float media(float n1, float n2, char l){
		float m;
		if (l=='A'){
			m=(n1+n2)/2.0;
}		else if (l=='B'){
			m=sqrtf(n1*n2);
}
return m;
}
