#include <stdio.h>
#include <string.h>
int main(){
	char string[100];
	FILE *arq;

	arq=fopen("caracteres.txt","w");
	if (arq==NULL){
		perror("Erro ao abrir o arquivo\n");
		return 1;
	}

	fgets(string,100,stdin);
	int s=strlen(string);

	for(int i=0;i<s;i++){
		if(string[i]=='\n'){
			break;
		}
		fputc(string[i],arq);
		fputc('\n',arq);
	}
	printf ("String gravada com sucesso!\n");
fclose(arq);
return 0;
}
