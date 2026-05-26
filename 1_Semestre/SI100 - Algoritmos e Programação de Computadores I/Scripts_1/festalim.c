#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
        void separar(char* vet, int cont){
                int j,i,n=0,l;
                int contador=0;
		int quant_palavras=1;
                char radicais[1000][275];
                char* palav_sep[275];
                char limpo[275];
                int tam, tamanho;
                int maior=0;
                for (i=0;i<cont;i++){   //contando a quantidade de palavras
                        if(vet[i]==' '){
                        quant_palavras++;
        }
}
                printf ("a quantidade de palavras é: %d\n",quant_palavras);

                for (i=0;i<cont;i++){   //limpando acentos
                        if((vet[i]>='A' && vet[i]<='Z')
                        ||(vet[i]>='a' && vet[i]<='z')
                        ||(vet[i]=='\0' || vet[i]=='-' || vet[i]==' ')){
                                limpo[n++]=vet[i];
        }
}
                                limpo[n]='\0';
                printf ("a string limpa é: %s\n",limpo);

		i=0;
                palav_sep[i]=strtok(limpo," ");   //separando a string em palavras

                while (i<quant_palavras && palav_sep[i]!=NULL){  //encontrando a palavra de maior tamanho
			tamanho=strlen(palav_sep[i]);
			if (tamanho>maior){
				maior=tamanho;
	}
		i++;
		palav_sep[i]=strtok(NULL," ");
}
			printf ("as palavras da string são: %s\n");
			for (j=0;j<i;j++){
				printf ("%s\n",palav_sep[j]);
}
			printf ("o tamanho da maior palavra é: %d\n",maior);

		for(j=0;j<i;j++){
                	l=strlen(palav_sep[j]);
			for (n=0;n<=l-3;n++){
				for (tam=3;tam<=l-n;tam++){
			strncpy(radicais[contador], palav_sep[j] + n,tam);
			radicais[contador][tam]='\0';
			contador++;
		}
	}
}
			printf ("os radicais são:\n");
			for(i=0;i<contador;i++){
				printf ("%s\n",radicais[i]);
	}
}
        int main(){
                char principal[275];
                int i=0,n;
                char* vet[10];
                int cont[10];
                do {
                        fgets(principal,275,stdin);     //lendo a string
                        principal[strcspn(principal,"\n")]='\0';       //trocando o /n por /0
		if (strcmp(principal,"FIM")==0){
			break;
}
		vet[i]=malloc(strlen(principal));       //alocando espaço na memória
		strcpy(vet[i],principal);       //copiando a string principal para um vetor de strings
                cont[i]=strlen(vet[i]);         //guardando o tamanho da string em um vetor
                i++;
}
		while (1);
		for(n=0;n<i;n++){
			printf ("%s\n",vet[n]);
                        separar (vet[n], cont[n]);
			free (vet[n]);
}
return 0;
}
