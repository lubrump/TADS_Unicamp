//Faça um programa Java SE que leia a partir do teclado um valor de cada tipo nativo e um valor String,
//cada qual em variável própria, e, em seguida, imprima-os na tela.
import java.util.Scanner;
public class LerVal {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite um número do tipo Int: ");
        int Inum = ler.nextInt();
        System.out.println(Inum);
        System.out.println("Digite um número do tipo Short: ");
        short Snum = ler.nextShort();
        System.out.println(Snum);
        System.out.println("Digite um número do tipo Long: ");
        long Lnum = ler.nextLong();
        System.out.println(Lnum);
        System.out.println("Digite um número do tipo Float: ");
        float Fnum = ler.nextFloat();
        System.out.println(Fnum);
        System.out.println("Digite um número do tipo Double: ");
        double Dnum = ler.nextDouble();
        System.out.println(Dnum);
        System.out.println("Digite um número do tipo Boolean: ");
        boolean Bnum = ler.nextBoolean();
        System.out.println(Bnum);
        System.out.println("Digite um número do tipo Char: ");
        String Cnum = ler.next();
        System.out.println(Cnum);
    }
}
