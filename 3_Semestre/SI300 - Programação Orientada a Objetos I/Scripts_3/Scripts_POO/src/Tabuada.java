import java.util.Scanner;
public class Tabuada {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.print("Digite um número: ");
        int num = ler.nextInt();
        for (int i = 0; i < 11; i++){
            System.out.println(num+" x "+i+" = "+num*i);
        }
    }
}
