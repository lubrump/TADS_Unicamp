#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	int main(){
		typedef struct dados{
			char nome[101];
			int ra;
			float p1,p2;
			float med;
		}Dados;

		Dados* ref;
		int n,i;
			scanf("%d",&n);
				getchar();
			ref=(Dados*)malloc(n*sizeof(Dados));
				for (i=0;i<n;i++){
					fgets(ref[i].nome,101,stdin);
					if (ref[i].nome[strlen(ref[i].nome)-1]=='\n'){
						ref[i].nome[strlen(ref[i].nome)-1]='\0';
}
					scanf("%d",&ref[i].ra);
					scanf("%f",&ref[i].p1);
                                        scanf("%f",&ref[i].p2);
					ref[i].med=(ref[i].p1+ref[i].p2)/2;
						getchar();
}
			for(i=0;i<n;i++){
				printf ("%d\t%s\t%.2f\n",ref[i].ra,ref[i].nome,ref[i].med);
}
return 0;
}
