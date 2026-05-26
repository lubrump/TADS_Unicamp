package Main;

import Model.ClassBiblioteca;
import Model.ClassLivro;

public class MainBiblioteca {
    public static void main(String[] args) {
        ClassBiblioteca biblioteca = new ClassBiblioteca();

        ClassLivro livro1 = new ClassLivro("Noites Brancas", "Fiódor Dostoiévski", 1848);
        ClassLivro livro2 = new ClassLivro("A Hora da Estrela", "Clarice Lispector", 1985);
        ClassLivro livro3 = new ClassLivro("Verity", "Collen Hoover", 2018);
        ClassLivro livro4 = new ClassLivro("Quarta Asa", "Rebecca Yarros", 2023);

        biblioteca.adicionarLivros(livro1);
        biblioteca.adicionarLivros(livro2);
        biblioteca.adicionarLivros(livro3);
        biblioteca.adicionarLivros(livro4);

        biblioteca.removerLivros(livro3);
        biblioteca.removerLivros(livro4);

        biblioteca.exibirLivros();
    }
}