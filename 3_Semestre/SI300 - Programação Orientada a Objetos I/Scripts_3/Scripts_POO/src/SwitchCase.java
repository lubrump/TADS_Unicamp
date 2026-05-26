//Faça um programa Java SE que leia pelo teclado 2 números inteiros e um código de operação aritmética (+, -, * ou /)
//e mostre o resultado da correspondente operação na tela ou um aviso caso seja selecionada divisão com divisor zero.
//Use uma estrutura condicional tipo switch-case.
import java.util.Scanner;
public class SwitchCase {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite dois números: ");
        int num1 = ler.nextInt();
        int num2 = ler.nextInt();
        System.out.println("Digite um operador aritmético (+, -, * ou /): ");
        char operador = ler.next().charAt(0);
        switch (operador){
            case '+':
                int res = num1 + num2;
                System.out.println("Resultado: "+res);
                break;
            case '-':
                res = num1 - num2;
                System.out.println("Resultado: " + res);
                break;
            case '*':
                res = num1 * num2;
                System.out.println("Resultado: " + res);
                break;
            case '/':
                res = num1 / num2;
                System.out.println("Resultado: " + res);
                break;
        }
    }
}
