import java.util.Scanner;
public class LerSoma {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite dois números: ");
        int num1 = ler.nextInt();
        int num2 = ler.nextInt();
        int res = num1 + num2;
        System.out.println("O resultado da soma é: "+res);
    }
}
