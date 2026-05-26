//Faça um programa Java SE que leia 2 números pelo teclado e imprima o maior deles na tela,
//usando apenas métodos de classes do Java, sem nenhuma estrutura condicional
import java.util.Scanner;
public class MetJava {
    public static void main(String[] args) {
       Scanner ler = new Scanner(System.in);
       System.out.println("Digite dois números: ");
       int num1 = ler.nextInt();
       int num2 = ler.nextInt();
       int maior = Math.max(num1, num2);
        System.out.println("O maior valor é: "+maior);
    }
}
