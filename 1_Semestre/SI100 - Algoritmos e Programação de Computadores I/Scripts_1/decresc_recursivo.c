#include <stdio.h>
int descrescente(int i){
    if (i==0){
        return 1;
    } 
    return (descrescente(i-1));
}
int main(){
    int i;
    printf(Escolha um número: );
    scanf("%d", &i);
    printf("%d", decrescente(int i));
return 0;
}
