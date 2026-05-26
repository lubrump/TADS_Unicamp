#include <stdio.h> 
int main () {
float a, b;
char operador;
scanf ("%f %c %f", &a,&operador,&b);
	if (operador=='*'){
		printf ("%.3f*%.3f=%.3f\n",a,b,a*b);
}
	else if (operador=='-'){
		printf ("%.3f-%.3f=%.3f\n",a,b,a-b);
}
	else if (operador=='+'){
		printf ("%.3f+%.3f=%.3f\n",a,b,a+b);
}
	else if (operador=='/'){
		printf ("%.3f/%.3f=%.3f\n",a,b,a/b);
}
	else{
	printf ("Operador invalido\n");
}

return 0;

}
