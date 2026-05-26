#include <stdio.h>
int main(){
	char c;
	int vogais=0, consoantes=0;
	FILE *arq;

	arq=fopen("poema.txt","r");
	if(arq==NULL){
		perror("Erro ao abrir o arquivo\n");
		return 1;
	}

	while((c=fgetc(arq))!=EOF){
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||
			  c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
				vogais++;
			}
			else{
				consoantes++;
			}
		}
	}
	printf ("No texto há %d vogais e %d consoantes\n", vogais, consoantes);
fclose(arq);
return 0;
}
