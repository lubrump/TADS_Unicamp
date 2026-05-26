//Faça um programa Java SE que leia pelo teclado uma expressão formada por 2 ou mais palavras
//separadas por espaço e apresente-a na tela.
import java.util.Scanner;
public class LerPal02 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Escreva uma ou várias palavras: ");
        String palavras = ler.nextLine();
        System.out.println("Você digitou: "+ palavras);
        ler.close();
    }
}
