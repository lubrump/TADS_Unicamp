//Crie um programa que peça ao usuário um número inteiro correspondente à sua preferência de comida
//para o próximo almoço. Use uma estrutura switch-case para imprimir os pratos escolhidos segundo a tabela:
//(1, salada), (2, arroz e feijão), (3, espaguete ao sugo), (4, frango frito com fafora), (5, bisteca grelhada),
//(6, peixe ensopado), (<qualquer outro valor>, “Prato indisponível”).
import java.util.Scanner;
public class Menu {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        System.out.println("Escolha uma opção: ");
        System.out.println("1) Salada");
        System.out.println("2) Arroz e feijão");
        System.out.println("3) Espaguete ao sugo");
        System.out.println("4) Frango frito com farofa");
        System.out.println("5) Bisteca grelhada");
        System.out.println("6) Peixe ensopado");
        int opcao = ler.nextInt();
        switch (opcao) {
            case 1:
                System.out.println("Você escolheu a opção 'Salada'");
                break;
            case 2:
                System.out.println("Você escolheu a opção 'Arroz e feijão'");
                break;
            case 3:
                System.out.println("Você escolheu a opção 'Espaguete ao sugo'");
                break;
            case 4:
                System.out.println("Você escolheu a opção 'Frango frito com farofa'");
                break;
            case 5:
                System.out.println("Você escolheu a opção 'Bisteca grelhada'");
                break;
            case 6:
                System.out.println("Você escolheu a opção 'Peixe ensopado'");
                break;
            default:
                System.out.println("Opção inválida!");
                break;
        }
    }
}
