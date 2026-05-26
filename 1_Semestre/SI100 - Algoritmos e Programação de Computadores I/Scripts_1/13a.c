#include <stdio.h>
	float volume_esfera(float r){
		float v;
		v=(4.0/3.0)*3.14159*(r*r*r);
		return v;
}
	int main(){
		float r;
		scanf ("%f", &r);
		printf ("%.2f\n",volume_esfera(r));
return 0;
}
