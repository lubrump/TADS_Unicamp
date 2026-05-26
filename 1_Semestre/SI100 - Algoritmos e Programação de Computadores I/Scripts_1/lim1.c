#include <stdio.h>
#include <string.h>
#include <stdlib.h>
        void separar(char* vet, int cont){
                for (i=0;i<cont;i++){   //contando a quantidade de palavras
                        limpo[i];
                        if (limpo[i]==' '){
                                quant_palavras++;
	}
}
                for (i=0;i<cont;i++){   //limpando acentos
                        if((vet[i]>='A' && vet[i]<='Z')
                        ||(vet[i]>='a' && vet[i]<='z')
                        ||(vet[i]=='\0' || vet[i]=='-')){
                                limpo[i]=vet[i];
        }
}
                for (i=0;i<cont;i++){   //deixando tudo em minúsculo
                        if(limpo[i]>='A' && limpo[i]<='Z'){
                                limpo[i]=limpo[i]+32;
       }
}
		*palav_sep=strtok(limpo,' ');	//separando a string em palavras
		for(i=0;i<quant_palavras;i++){	//encontrando a palavra de maior tamanho
			for(j=1;j<quant_palav;j++){
				tamanho=strlen(palav_sep[i]);
				tam=strlen(palav_sep[j]);
			if (tamanho>tam){
				maior=tamanho;
			else {
				maior=tam;
			}
		}
	}
}
			for(j=0;j<=maior-3;j++){	//evitar que o radical acesse posições inválidas
				for(n=3;n<=maior-j;n++){	//define as letras disponíveis para separar em radicais
					for(p=j;p<j+n;p++){	//separa em radicais de 3 até o tamanho da palavra
						(radicais[p]);	//guardadas os radicais no vetor de strings
		}
	}
}
			for()
				for()
					if(radicais[i]==radicais[i++]){
						freq_radical[i]=radicais[i];
						freq[i]=l++;
}
			res=	//calcular a dificuldade
			printf ("%s %d\n",);	//radical e frequência
			printf ("%.2f\n",);	//dificuldade
	}
}
	int main(){
		char principal[275];
		int i=0,n;
		char* vet[10];
		int cont[10];
		while (1){
			fgets(principal,275,stdin);	//lendo a string
				for (i=0;principal[i]!='\0';i++){	//trocando o /n por /0
					if (principal[i]==n){
						principal[i]=0;
	}
}
					if (strcmp(principal,"FIM")!=0){
						vet[i]=malloc(strlen(principal));	//alocando espaço na memória
						strcpy(vet[i],principal);	//copiando a string principal para um vetor de strings
						cont[i]=strlen(vet[i]);		//guardando o tamanho da string em um vetor 
						i++;
}
					else {
						break;
	}
}
		for(n=0;n<i;n++){
			printf ("%s\n",vet[n]);
			separar (vet[n], cont[n]);
			free (vet[n]);
	}
return 0;
}
