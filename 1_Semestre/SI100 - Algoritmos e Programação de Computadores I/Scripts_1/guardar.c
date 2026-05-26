#include <stdio.h>
#include <string.h>
#include <stdlib.h>
        void tratar_trava(char* vet, int cont, char *radical_freq, int* rep, float *dificuldade){
                int j,i,n=0,l,p,m=0,tam_radical;
                int contador=0;
		int quant_palavras=1;	//começo em 1 para que a contagem de palavras fique correta
		char mais_frequente[275]="-";
                char radicais[1500][100];
                char* palav_sep[275];
                char limpo[275];
                int tam, tamanho;
                int maior=0;
		int frequencia;
		int pos_1=0;
		int ordem[1500];
		int posicoes[1500];
		int tamanhos[1500];
                for (i=0;i<cont;i++){   //contando a quantidade de palavras separando por espaço
                        if(vet[i]==' '){
                        quant_palavras++;
        }
}
                for (i=0;i<cont;i++){   //limpando acentos e caracteres especiais
                        if((vet[i]>='A' && vet[i]<='Z')
                        ||(vet[i]>='a' && vet[i]<='z')
                        ||(vet[i]=='\0' || vet[i]=='-' || vet[i]==' ')){
                                limpo[n++]=vet[i];
        }
}
		for (i=0;i<cont;i++){	//deixando tudo em minúsculo
			if (limpo[i]>='A' && limpo[i]<='Z'){
				limpo[i]=limpo[i]+32;
	}
}
                limpo[n]='\0';	//finalizando a string limpa
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
		for(j=0;j<i;j++){	//encontrando todos os radicais possíveis
                	l=strlen(palav_sep[j]);
			for (n=0;n<=l-3;n++){	//evitando acessos fora da palavra
				for (tam=3;tam<=l-n;tam++){
			strncpy(radicais[contador], palav_sep[j] + n,tam);
			radicais[contador][tam]='\0';
			posicoes[contador]=n;	//posição inicial para futura comparação
			ordem[contador]=j;	//ordem da palavra no texto
			tamanhos[contador]=tam;	//armazenamento do tamanho
			contador++;
		}
	}
}
		for (n=0;n<contador;n++){	//encontrando o radical mais frequente
			if (strcmp(radicais[n],"a")==0) continue;	//radicais que já foram marcados
				frequencia=1;
			for (p=n+1;p<contador;p++){
				if ((strcmp(radicais[n], radicais[p]))==0){
					frequencia++;
					strcpy (radicais[p],"a");
	}
}
				if ((frequencia>m) ||	//critérios para selecionar o radical
					(frequencia==m && tamanhos[n]>tamanhos[pos_1]) ||
					(frequencia==m && tamanhos[n]==tamanhos[pos_1] && ordem[n]<ordem[pos_1]) ||
					(frequencia==m && tamanhos[n]==tamanhos[pos_1] && ordem[n]==ordem[pos_1] && posicoes[n]<posicoes[pos_1])){
					m=frequencia;
					strcpy(mais_frequente,radicais[n]);
					pos_1=n;	//atualiza a posição
	}
}
			strcpy (radical_freq, mais_frequente);
			*rep=m;
			tam_radical=strlen(mais_frequente);
			*dificuldade=(m*tam_radical)/(float)quant_palavras;	//calcula a dificuldade
}
	int main(){
                char principal[275];
                int i=0,n,k;
                char* vet[10];
                int cont[10];
		char radicais_freq[10][275];
		int repeticoes[10];
		float dificuldades[10];
		float troca_d;
		int troca_r;
		char troca_rad[275];
		char* vetor;
		int troca_c;
                	do {
                        		fgets(principal,275,stdin);     //lendo a string
                        		principal[strcspn(principal,"\n")]='\0';       //trocando o /n por /0
					principal[strcspn(principal,"\r")]='\0';
				if (strcmp(principal,"FIM")==0){
					break;
}
				vet[i]=(char*)malloc((strlen(principal)+1) * sizeof(char));       //alocando espaço na memória
				vet[i][strlen(principal)+1]='\0';
				strcpy(vet[i],principal);       //copiando a string principal para um vetor de strings
                		cont[i]=strlen(vet[i]);         //guardando o tamanho da string em um vetor
                		i++;
}
			while (i<10);

			for(n=0;n<i;n++){	//chamando a função para tratar cada trava-língua
                        	tratar_trava (vet[n], cont[n], radicais_freq[n], &repeticoes[n], &dificuldades[n]);
}
			for (n=0;n<i-1;n++){
				for(k=0;k<i-1;k++){
					if(dificuldades[k]<dificuldades[k+1]){	//ordenar por ordem de dificuldade
						troca_d=dificuldades[k];	//trocando as dificuldades
						dificuldades[k]=dificuldades[k+1];
						dificuldades[k+1]=troca_d;

						troca_r=repeticoes[k];	//trocando as repetições
						repeticoes[k]=repeticoes[k+1];
						repeticoes[k+1]=troca_r;

						strcpy(troca_rad,radicais_freq[k]);	//trocando os radicais
						strcpy(radicais_freq[k],radicais_freq[k+1]);
						strcpy(radicais_freq[k+1],troca_rad);

						vetor=vet[k];	//trocando os textos
						vet[k]=vet[k+1];
						vet[k+1]=vetor;

						troca_c=cont[k];	//trocando os contadores
						cont[k]=cont[k+1];
						cont [k+1]=troca_c;
		}
	}
}
			for(n=0;n<i;n++){	//imprime:
				printf ("%s\r\n",vet[n]);	//trava-língua original
				printf ("%s %d\n",radicais_freq[n],repeticoes[n]);	//o radical mais frequente e a quantidade de repetições
				printf ("%.2f\n",dificuldades[n]);	//a dificuldade
				free (vet[n]);	//libera a memória
}
return 0;
}
