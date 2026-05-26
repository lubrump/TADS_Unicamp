package Main;
import Model.BasketballPlayer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class MainComparable {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        ArrayList<BasketballPlayer> listaJogadores = new ArrayList<>();

        System.out.println("Insira 20 Jogadores");

        for (int i = 0; i < 20; i++){
            System.out.println();
            System.out.println("Jogador "+ (i + 1) +":");
            System.out.print("Nome: ");
            String nome = ler.nextLine();

            System.out.print("Altura: ");
            double altura = ler.nextDouble();

            ler.nextLine();
            listaJogadores.add(new BasketballPlayer(nome, altura));
        }

        Collections.sort(listaJogadores);

        for (BasketballPlayer b : listaJogadores){
            System.out.println(b);
        }
    }
}
