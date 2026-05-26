package Main;
import Model.classPalpiteiro;

public class principalPalpiteiro {
    public static void main(String[] args) {
        int[] palpite = classPalpiteiro.deUmPalpite();

        for (int i = 0; i < palpite.length; i++) {
            int resultado = palpite[i];
            String descricao;

            switch (resultado) {
                case 1:
                    descricao = "Coluna 1";
                    break;
                case 2:
                    descricao = "Coluna 2";
                    break;
                default:
                    descricao = "Empate";
                    break;
            }

            System.out.printf("Jogo %02d: [%d] -> %s%n", (i + 1), resultado, descricao);
        }
    }
}
