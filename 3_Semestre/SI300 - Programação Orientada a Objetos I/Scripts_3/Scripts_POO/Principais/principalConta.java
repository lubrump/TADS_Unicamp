package Main;
import Model.contaBancaria;
import java.util.Scanner;

public class principalConta {
    public static void main(String[] args) {
        Scanner ler = new Scanner (System.in);

        System.out.println("Digite o número da conta: ");
        String numConta = ler.nextLine();
        System.out.println("Digite o nome do titular: ");
        String titular = ler.nextLine();

        contaBancaria conta = new contaBancaria (titular, numConta, 0);

        int escolha;
        do {
            escolha = conta.exibirMenu();
            if (escolha != 4) {
                conta.retornarOpcao(escolha);
            }
        } while (escolha != 4);
    }
}

