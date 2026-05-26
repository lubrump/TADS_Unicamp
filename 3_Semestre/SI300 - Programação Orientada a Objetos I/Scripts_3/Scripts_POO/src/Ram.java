//Faça um programa Java SE que apresente em tela uma listagem de 512 inteiros
// aleatórios entre 0 e 1024, obtidos a partir de um objeto da classe Random.
// Em seguida a cada valor, informe cumulativamente: a) se está na faixa entre 0 e 13;
// b) se é múltiplo de 11 (use operador módulo para verificar); c) se é par ou ímpar (idem).
// O objetivo é utilizar conjuntamente uma classe utilitária (Random), estruturas condicionais e
// de estruturas de repetição.
import java.util.Random;
public class Ram {
    public static void main(String[] args) {
        Random gerador = new Random();
        int cont = 1;
        while (cont != 513){
            int numero = gerador.nextInt(1024);
            System.out.println(numero+": ");
            String faixa = numero > 0 && numero < 13 ? "a) Na faixa" : "a) Fora da faixa";
            String mult = numero % 11 == 0 ? "b) É multiplo" : "b) Não é múltiplo";
            String parImpar = numero % 2 == 0 ? "c) Par" : "c) ìmpar";
            System.out.println(faixa);
            System.out.println(mult);
            System.out.println(parImpar);
            cont++;
        }
    }
}
