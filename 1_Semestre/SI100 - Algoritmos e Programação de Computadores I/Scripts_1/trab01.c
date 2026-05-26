#include <stdio.h> 
int main () {
	int dd,mm,aaaa;
	 scanf ("%d/%d/%d",&dd,&mm,&aaaa);
	switch (mm){
		case 1:
			printf ("%d de janeiro de %d\n",dd,aaaa);
			break;
		case 2:
			printf ("%d de fevereiro de %d\n",dd,aaaa);
			break;
		case 3:
			printf ("%d de março de %d\n",dd,aaaa);
			break;
		case 4:
			printf ("%d de abril de %d\n",dd,aaaa);
			break;
		case 5:
			printf ("%d de maio de %d\n",dd,aaaa);
			break;
		case 6:
			printf ("%d de junho de %d\n",dd,aaaa);
			break;
		case 7:
			printf ("%d de julho de %d\n",dd,aaaa);
			break;
		case 8:
			printf ("%d de agosto de %d\n",dd,aaaa);
			break;
		case 9:
			printf ("%d de setembro de %d\n",dd,aaaa);
			break;
		case 10:
			printf ("%d de outubro de %d\n",dd,aaaa);
			break;
		case 11:
			printf ("%d de novembro de %d\n",dd,aaaa);
			break;
		case 12:
			printf ("%d de dezembro de %d\n",dd,aaaa);
			break;
		 default:
                        printf ("Mes invalido\n");
}
return 0;
}

