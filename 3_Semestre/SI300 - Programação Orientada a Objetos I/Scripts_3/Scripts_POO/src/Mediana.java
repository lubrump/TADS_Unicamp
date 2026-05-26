//Faça um programa Java SE que leia pelo teclado um conjunto de números reais (double)
//e mostre a sua mediana na tela (especifique um critério de parada para a entrada como,
//por exemplo, um valor sentinela, um contador de valores, etc.);
import java.util.Scanner;
import java.util.Arrays;
public class Mediana {
    public static void main(String[] args) {
    Scanner ler = new Scanner (System.in);
    double [] num = new double [9999];
    int i = 0;
    System.out.println("Digite números para encontrar sua mediana (9999 para parar): ");
    while (true) {
        double entrada = ler.nextInt();
        if (entrada == 9999){
            break;
            }
        num[i] = entrada;
        i++;
        }
    Arrays.sort(num, 0, i);
    if (i % 2 != 0){
        System.out.println("A Mediana é: "+num[i / 2]);
        }
    else if (i % 2 == 0){
        double n1 = num[i/2];
        double n2 = num[i/2-1];
        double res = (n1 + n2) / 2;
        System.out.println("A Mediana é: "+res);
        }
    }
}
