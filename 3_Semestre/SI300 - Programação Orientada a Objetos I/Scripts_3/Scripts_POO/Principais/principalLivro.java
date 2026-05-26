package Main;
import Model.classLivros;
import java.util.Scanner;

public class principalLivro {
    public static void main(String[] args) {
        classLivros livros = new classLivros();
        Scanner ler = new Scanner(System.in);

        System.out.println("Digite o título do livro: ");
        String titulo = ler.nextLine();

        System.out.println("Digite o nome do autor do livro: ");
        String autor = ler.nextLine();

        System.out.println("Digite o preço do livro: ");
        float preco = ler.nextFloat();

        livros.setTitulo(titulo);
        livros.setAutor(autor);
        livros.setPreco(preco);

        System.out.println("O título do livro é: " + livros.getTitulo());
        System.out.println("O autor do livro é: " + livros.getAutor());
        System.out.println("O preço do livro é: " + livros.getPreco());
    }
}
