//Faça um programa Java SE que leia pelo teclado um conjunto de números reais (double)
//e mostre a sua média na tela (especifique um critério de parada para a entrada como, por exemplo,
//um valor sentinela, um contado de valores, etc.);
import java.util.Scanner;
public class Media {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int num = 0;
        int cont = 0;
        float soma = 0;
        System.out.println("Digite números para determinar sua média (Digite '9999' para parar): ");
        while (true){
            num = ler.nextInt();
            if (num == 9999){
                break;
            }
            soma += num;
            cont ++;
        }
        float res = soma / cont;
        System.out.println("A média dos números é: "+res);
    }
}
