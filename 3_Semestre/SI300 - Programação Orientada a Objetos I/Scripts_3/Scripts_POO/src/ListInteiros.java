//Faça um programa Java SE usando laço while e uma variável de controle int,
// que apresente em tela uma listagem de inteiros de 0 a 99. Em seguida a cada valor,
// informe cumulativamente: a) se está na faixa entre 18 e 24; b) se é múltiplo de 3
// (use operador módulo para verificar); c) se é par ou ímpar (idem). O objetivo é utilizar estruturas
// condicionais tipo if, if-else, e ?: (operador ternário). Veja o exemplo de 2 saídas aleatórias: “19 – na faixa –
// não múltiplo de 3 – ímpar”, “42 – fora da faixa – múltiplo de 3 – par”.
public class ListInteiros {
    public static void main(String[] args) {
        int i = 0;
        while (i != 100) {
            System.out.println(i+": ");
            String faixa = i > 18 && i < 24 ? "a) Na faixa" : "b) Fora da faixa";
            String mult = i % 3 == 0 ? "b) Multiplo de 3" : "b) Não múltiplo de 3";
            String parImpar = i % 2 == 0 ? "c) Par " : "c) Ímpar";
            System.out.println(faixa);
            System.out.println(mult);
            System.out.println(parImpar);
            i++;
        }
    }
}
