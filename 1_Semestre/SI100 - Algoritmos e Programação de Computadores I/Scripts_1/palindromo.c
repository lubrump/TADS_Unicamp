#include <stdio.h>
#include <string.h>
int main(){
	char string[50];
	char string2[50];
	char string2[50];
	char normal[50];
	char contrario[50];
	int s,s2,p,n;

	printf ("Digite a primeira palavra: ");
	scanf ("%s",string);
	printf ("Digite a segunda palavra: ");
	scanf ("%s",string2);

	s=strlen(string);
	s2=strlen(string2);
	if (s!=s2){
		printf ("\nNão é palíndromo\n");
		return 0;
	}
        for(p=s-1,n=0;p>=0;p--,n++){

		normal[n]=string2[n];
		if(normal[n]>='A' && normal[n]<='Z'){
		normal[n]=normal[n]+32;
		}

		contrario[n]=string[p];
	 	if(contrario[n]>='A' && contrario[n]<='Z'){
		contrario[n]=contrario[n]+32;
		}
	}
	normal[s]='\0';
	contrario[s]='\0';

	if(strcmp(normal,contrario)==0){
		printf ("\nPalíndromo\n");
	}
	else{
		printf ("\nNão é palíndromo\n");
	}
return 0;
}
