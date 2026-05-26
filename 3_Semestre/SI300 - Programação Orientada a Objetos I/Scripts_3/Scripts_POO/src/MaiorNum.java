//Faça um programa Java SE que leia 2 números pelo teclado e imprima o maior deles na tela utilizando:
//a) estrutura condicional if-else;
//b) operador condicionala ternário.
import java.util.Scanner;
public class MaiorNum {
    public static void main(String[] args) {
        int maior;
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite dois números: ");
        int num1 = ler.nextInt();
        int num2 = ler.nextInt();
        if (num1 > num2){
            maior = num1;
        }
        else {
            maior = num2;
        }
        System.out.println("a) estrutura condicional if-else. O maior número é: "+maior);
        System.out.println("b) operador condicional ternário. O maior número é: " + (num1 > num2 ? num1 : num2));
    }
}
