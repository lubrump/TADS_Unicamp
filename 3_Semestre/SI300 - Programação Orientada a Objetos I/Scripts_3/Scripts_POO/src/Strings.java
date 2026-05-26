//Faça um programa Java SE que leia Strings a partir do teclado, armazenando-as num array
//(pesquise como criar arrays) até que seja entrada uma linha de texto que termine por “fim”
//(ex: “agora é o fim”, “acabou o texto. fim”, “fim”, …) ou que tenham sido entradas 128 linhas.
//Use o metodo endsWith() da classe String e um dos laços não-contados (while ou do-while).
//Finda a entrada de dados, imprima as linhas em ordem inversa.
import java.util.Scanner;
public class Strings {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        String [] frases = new String [129];
        int i = 0;
        System.out.println("Digite frases ('fim' para parar): ");
        while (true){
            frases [i]=ler.nextLine();
            if (frases[i].equals("fim") || i > 127){
                break;
            }
            i++;
        }
        for (int j = i - 1; j > -1; j--){
            System.out.println(frases[j]);
        }
    }
}
