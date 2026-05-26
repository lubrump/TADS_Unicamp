package Main;
import Model.ponto2D;
import java.util.Scanner;

public class principalPonto {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite dois pontos: ");
        float p1 = ler.nextFloat();
        float p2 = ler.nextFloat();

        ponto2D ponto = new ponto2D(p1, p2);

        System.out.println("Os pontos digitados foram: ");
        System.out.println(ponto.getp1() + " e " + ponto.getp2());

    }
}
