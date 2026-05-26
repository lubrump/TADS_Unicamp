package Main;
import Model.classPotencia;

public class principalPotencia {
    public static void main(String[] args){
        double res1 = classPotencia.calcula(2, 3);
        System.out.println("Resultado: " + res1);
        System.out.println();

        double res2 = classPotencia.calcula(7, 2.78);
        System.out.println("Resultado: " + res2);
        System.out.println();

        double res3 = classPotencia.calcula(10.5, 5.6);
        System.out.println("Resultado: " + res3);
        System.out.println();
    }
}
