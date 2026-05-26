package Main;
import Model.classTemp;
import java.util.Scanner;

public class principalTemp {
    public static void main(String[] args) {
        classTemp temp = new classTemp();
        System.out.println("Digite uma temperatura em Kelvin: ");

        Scanner ler = new Scanner(System.in);
        double kelvin = ler.nextDouble();

        temp.setTemp(kelvin);

        System.out.println("A temperatura em kelvin é: " + temp.getKelvin());
        System.out.println("A temperatura em celsius é: " + temp.getCelsius());
        System.out.println("A temperatura em fahrenheit é: " + temp.getFah());
    }
}
