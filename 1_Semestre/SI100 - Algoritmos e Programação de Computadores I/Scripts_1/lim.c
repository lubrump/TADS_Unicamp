#include <stdio.h>
#include <string.h>
	int main(){
	int n,x,i=-1,y,z,len,let;
	float res;
	char* vets[100];
	char string[275];
	char* radicais[1000];
	int iguais=0;
		do{
			fgets(string,275,stdin);
                	len=strlen(string);     //armazenando o tamanho da string
			//quero copiar a palavra até que seja encontrado um espaço e guarde em um vetor
} while(strcmp(string,"FIM")==0);
		for (n=3;n<9;n++){	//separando cada string em radicais de tamanho 3 até 8 (preciso separar as palavras)
			i++;
			for (x=0;x<n;x++){
				radicais[i]=string[x];
}
	}
		for(y=0;y<i;y++){	//quantidade de radicais
			for(z=1;z<i;z++){
				if (strcmp(radicais[y],radicais[z])==0){
					iguais++;
}
	}
		}
			}
		iguais++; 	//aqui é para a string que foi usada para comparação entrar na contagem também
		res=(iguais+let)/len;	//fazendo a contagem da dificuldade
		printf ("%s\n",string);
		printf ("radical %d\n",iguais);
		printf ("%.2f\n",res);
return 0;
}
