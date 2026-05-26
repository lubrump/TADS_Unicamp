#include <stdio.h>
#include <string.h>
	int main(){
		char string[80];
		char resulta[80];
		int p,n,s;
		scanf ("%79[^\n]",string);	//leitura da string retirando o \n
		s=strlen (string);	//contagem de caracteres da string lida
			for(p=s-1,n=0;p>=0;p--,n++)	//é excluída a contagem do caracter nulo por "p=s-1"
				resulta[n]=string[p];	//os caracteres da string são atribuídos ao "resulta" de forma decrescente
		resulta[n]='\0';
		printf ("%s\n",resulta);
return 0;
}
