#include <stdio.h>

int main() {
    int a, b;
    char operador;
    
    printf("Digite a operacao (ex: 3 + 5): ");
    scanf("%d %c %d", &a, &operador, &b);

    if (operador == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    } 
    else if (operador == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    } 
    else if (operador == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    } 
    else if (operador == '/') {
        if (b != 0) {
            printf("%d / %d = %d\n", a, b, a / b);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    } 
    else {
        printf("Operador invalido! Use +, -, * ou /\n");
    }

    return 0;
}
