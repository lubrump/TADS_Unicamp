package Model;
import java.util.Scanner;

public class contaBancaria {
    private String titular;
    private String numConta;
    private float saldo;

    Scanner ler = new Scanner(System.in);

    public contaBancaria (String titular, String numConta, float saldo){
        this.titular = titular;
        this.numConta = numConta;
        this.saldo = saldo;
    }

    public int exibirMenu() {
        System.out.println("(1) Depositar");
        System.out.println("(2) Sacar");
        System.out.println("(3) Verificar saldo");
        System.out.println("(4) Sair");
        System.out.println("Escolha a operação que deseja realizar: ");
        int opcao = ler.nextInt();
        return opcao;
    }

    public void retornarOpcao(int opcao){
        if (opcao == 1){
            System.out.println("Digite o quanto deseja depositar: ");
            float deposito = ler.nextFloat();
            this.saldo += deposito;
        }
        else if (opcao == 2){
            System.out.println("Digite o quanto deseja sacar: ");
            float saque = ler.nextFloat();
            if (saque > this.saldo){
                System.out.println("Você não possui saldo suficiente\n");
            }
            else {
                this.saldo -= saque;
            }
        }
        else if (opcao == 3){
            System.out.println("Seu saldo é de R$" + this.saldo);
        }
    }
}
