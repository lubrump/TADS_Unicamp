package Main;
import Model.classPessoa;
import java.util.Scanner;

public class principalPessoa {
    public static void main(String[] args) {
        System.out.println("Insira o nome e a idade de uma pessoa: ");
        Scanner ler = new Scanner(System.in);
        String nome = ler.nextLine();
        int idade = ler.nextInt();

        classPessoa pessoa = new classPessoa(nome, idade);

        System.out.println("Listando dados de uma pessoa: ");
        System.out.println("Nome: " + pessoa.getNome());
        System.out.println("Idade: " + pessoa.getIdade());
    }
}