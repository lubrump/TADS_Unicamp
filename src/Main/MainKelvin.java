package Main;
import java.util.Scanner;

import Model.DataTransferObject;

public class MainKelvin {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite uma temperatura em kelvin: ");

        double kelvin = ler.nextDouble();
        DataTransferObject data = new DataTransferObject(kelvin);

        System.out.println("A temperatura digitada foi: " + data.getKelvin() + "K");
        System.out.println(kelvin + "K em Celsius é: " + data.getCelcius());
        System.out.println(kelvin + "K em Farenheit é: " + data.getFahreinheit());
    }
}
