package Main;

import Model.ComandoDesligarLuz;
import Model.ComandoLigarLuz;
import Model.ComandoLigarVentilador;
import java.util.Scanner;

public class MainComando {
    public static void main(String[] args) {
        Scanner ler = new Scanner (System.in);
        int op = -1;

        ComandoDesligarLuz desligarLuz = new ComandoDesligarLuz();
        ComandoLigarLuz ligarLuz = new ComandoLigarLuz();
        ComandoLigarVentilador ligarVent = new ComandoLigarVentilador();

        while (op != 4) {
            System.out.println("1- Desligar a luz");
            System.out.println("2- Ligar a luz");
            System.out.println("3- Ligar ventilador");
            System.out.println("4- Sair");
            System.out.println("Digite a sua opção: ");
            op = ler.nextInt();

            switch (op){
                case 1:
                    desligarLuz.executar();
                    break;
                case 2:
                    ligarLuz.executar();
                    break;
                case 3:
                    ligarVent.executar();
                    break;
            }
        }
    }
}
