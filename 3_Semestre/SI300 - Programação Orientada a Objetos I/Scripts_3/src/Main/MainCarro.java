package Main;

import Model.ClassCarro;
import Model.ClassMotor;
import java.util.ArrayList;

public class MainCarro {
    public static void main(String[] args) {
        ArrayList<ClassCarro> garagem = new ArrayList<>();

        ClassMotor motor1_0 = new ClassMotor(80);
        ClassMotor motorTurbo = new ClassMotor(170);
        ClassMotor motorV8 = new ClassMotor(450);

        ClassCarro carro1 = new ClassCarro("Mobi", "Fiat", motor1_0);
        ClassCarro carro2 = new ClassCarro("Virtus", "VW", motorTurbo);
        ClassCarro carro3 = new ClassCarro("Mustang", "Ford", motorV8);
        ClassCarro carro4 = new ClassCarro("Argo", "Fiat", motor1_0); // Motores iguais podem ser associados a carros diferentes

        garagem.add(carro1);
        garagem.add(carro2);
        garagem.add(carro3);
        garagem.add(carro4);

        System.out.println("Lista de Carros e seus Motores:");
        System.out.println("---------------------------------");
        for (ClassCarro carro : garagem) {
            System.out.println(carro);
        }
    }
}