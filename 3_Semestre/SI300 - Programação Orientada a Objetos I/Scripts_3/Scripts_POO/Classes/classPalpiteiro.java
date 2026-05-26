package Model;
import java.util.Random;

public class classPalpiteiro {
    public static int[] deUmPalpite(){
        int [] numeros = new int [14];
        Random aleatorio = new Random();

        for (int i = 0; i < 14; i++){
            numeros[i] = aleatorio.nextInt(3);
        }
        return numeros;
    }
}
