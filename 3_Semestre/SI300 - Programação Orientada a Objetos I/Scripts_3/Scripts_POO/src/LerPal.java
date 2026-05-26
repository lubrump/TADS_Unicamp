import java.util.Scanner;
public class LerPal {
    public static void main(String[] args) {
        Scanner LerPal = new Scanner(System.in);
        System.out.println("Digite uma palavra: ");
        String palavra = LerPal.next();
        System.out.println("Você digitou: "+palavra);
        LerPal.close();
    }
}
