#include <stdio.h>
#include <math.h>
	float adi(float a, float b);
	float sub(float a, float b);
	float mul(float a, float b);
	float div(float a, float b);
	float pot(float a, float b);
	int main (){
		float a,b;
		char o;
		float res;
		scanf ("%f%c%f",&a,&o,&b);
		if (o=='+'){
			res=adi(a,b);
}		else if (o=='-'){
			res=sub(a,b);
}		else if (o=='*'){
			res=mul(a,b);
}		else if (o=='/'){
			res=div(a,b);
}		else if (o=='^'){
			res=pot(a,b);
}		printf ("%.3f\n",res);
return 0;
}
        float adi(float a, float b){
		return(a+b);
}        float sub(float a, float b){
		return(a-b);
}        float mul(float a, float b){
		return(a*b);
}        float div(float a, float b){
		return(a/b);
}        float pot(float a, float b){
		return(pow(a,b));
}
