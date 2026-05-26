#include <stdio.h>

int main() {
    int linhas, colunas, l, c;
    int matriz[20][20];
    
    // Lê o número de linhas e colunas
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    
    // Preenche a matriz
    for (l = 0; l < linhas; l++) {
        for (c = 0; c < colunas; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }
    
    // Imprime a matriz formatada
    for (l = 0; l < linhas; l++) {
        for (c = 0; c < colunas; c++) {
            printf("%2d ", matriz[l][c]);  // %2d formata com 2 dígitos
        }
        printf("\n");  // Nova linha após cada linha da matriz
    }
    
    return 0;
}
