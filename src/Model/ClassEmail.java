package Model;
import Interfaces.Mensagem;
import java.util.Scanner;

public class ClassEmail implements Mensagem{
    public void enviar(){
        Scanner ler = new Scanner(System.in);
        System.out.println();
        System.out.println("Vamos escrever um email...");

        System.out.print("Para: ");
        String destinatario = ler.nextLine();

        System.out.print("Assunto: ");
        String assunto = ler.nextLine();

        System.out.print("Mensagem: ");
        String mensagem = ler.nextLine();

        System.out.println("Email enviado!");

        System.out.println("Para: " + destinatario);
        System.out.println(assunto);
        System.out.println(mensagem);
    }
}
