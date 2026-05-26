package Model;
import Interfaces.Mensagem;
import java.util.Scanner;

public class ClassSMS implements Mensagem {
    public void enviar() {
        Scanner ler = new Scanner(System.in);
        System.out.println();
        System.out.println("Vamos escrever um SMS...");

        System.out.print("Para: ");
        String destinatario = ler.nextLine();

        System.out.print("Mensagem: ");
        String mensagem = ler.nextLine();

        System.out.println("SMS enviado!");

        System.out.println("Para: "+ destinatario);
        System.out.println(mensagem);
    }
}
