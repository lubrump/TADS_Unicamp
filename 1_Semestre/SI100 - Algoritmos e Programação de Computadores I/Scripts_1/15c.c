#include <stdio.h>
#include <stdlib.h>
int main(){
	int** matriz; //Matriz principal que o usuário irá inserir
	int** matrizComparativa; //Matriz usada para comparação
	int linhas,colunas;
	int i,n;

	printf("Digite o número de linhas e de colunas da matriz: \n");
	scanf("%d\n%d",&linhas, &colunas);

	//Aloca memória para o array de ponteiros que representam as linhas
	matriz=(int**)malloc(linhas*sizeof(int*)); 
	matrizComparativa=(int**)malloc(linhas*sizeof(int*));

	//Aloca memória para as colunas de cada linha
	for(n=0;n<colunas;n++){
			matriz[n]=(int*)malloc(colunas*sizeof(int));
            matrizComparativa[n]=(int*)malloc(colunas*sizeof(int));
	}
	printf("Insira uma matriz %d por %d: \n", linhas, colunas);
	for(n=0;n<linhas;n++){
		for(i=0;i<colunas;i++){
			scanf("%d",&matriz[n][i]);
		}
	}
	//Copia os elementos da matriz principal para a matriz comparativa, mas invertendo suas linhas e colunas
	for(n=0;n<linhas;n++){
		for(i=0;i<colunas;i++){
			matrizComparativa[n][i]=matriz[n][i];
		}
	}
	//Percorre as duas matrizes 
	for(n=0;n<colunas;n++){
		for(i=0;i<linhas;i++){
			for(n=0;n<linhas;n++){
				for(i=0;i<colunas;i++){
					//Se algum elemento da matriz de comparação for diferente da matriz principal,
					//ela não é uma matriz simétrica
					if (matrizComparativa[i][n]!=matriz[n][i]){ 
						printf ("Não é uma matriz simétrica\n");
						return 0;
					}
				}
			}
		}
	}		
	printf ("É uma matriz simétrica\n"); //
return 0;
}
