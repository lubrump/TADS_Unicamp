package Main;
import Model.classCofre;
import java.util.Scanner;

public class principalCofre {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        System.out.println("Digite uma temperatura inicial para o cofre criogênico: ");
        double temp = ler.nextDouble();
        int cont = 3;

        while (temp > -196.0){
            System.out.println("Essa não é uma temperatura válida! Ela deve ser maior do que -196.0°C. Tente novamente!");
            temp = ler.nextDouble();
            cont --;

            if (cont == 0){
                temp = -196.0;
            }
        }
        classCofre cofre = new classCofre(temp);

        while (true) {
            System.out.println("[1] Abrir porta");
            System.out.println("[2] Fechar porta");
            System.out.println("[3] Manter frio");
            System.out.println("[4] Visualizar temperatura");
            System.out.println("[5] Sair");
            System.out.println("Digite uma opcao: ");
            int opcao = ler.nextInt();

            if (opcao == 1){
                cofre.abrePorta();
            }
            else if (opcao == 2){
                cofre.fechaPorta();
            }
            else if (opcao == 3){
                cofre.mantemFrio();
            }
            else if (opcao == 4){
                System.out.println("a temperatura do cofre é de: " + cofre.getTemp() + "°C");
            }
            else if (opcao == 5){
                break;
            }
        }
    }
}
