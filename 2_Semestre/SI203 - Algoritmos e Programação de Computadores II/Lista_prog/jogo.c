#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
		srand(time(NULL));
		int num=rand () % 50 + 1;
		int user;
		int cont=0;
		while (cont<=4){
			printf ("Tente acertar o número aleatório: ");
			scanf ("%d", &user);
                        if (num<user && (user-num)<=3){
                                printf ("Você errou, mas está próximo! O número escolhido é menor.\n");
                                cont++;
			}
                        else if (num>user && (num-user)<=3){
                                printf ("Você errou, mas está próximo! O número escolhido é maior.\n");
                                cont++;
                        }
			else if (num<user){
				printf ("Você errou. O número escolhido é menor!\n");
				cont++;
			}
			else if (num>user){
				printf ("Você errou. O número escolhido é maior!\n");
				cont++;
			}
			else if (num==user){
				printf ("Você acertou, parabéns!\n");
				break;
			}
		}
		if (cont==5){
			printf ("\n");
			printf ("Você esgotou todas as tentativas\n");
		}
return 0;
}
