package Model;

import java.util.ArrayList;

public class ClassBiblioteca {
    ArrayList<ClassLivro> biblioteca = new ArrayList<>();

    public void adicionarLivros(ClassLivro livro){
        this.biblioteca.add(livro);
    }
    public void removerLivros(ClassLivro livro){
        this.biblioteca.remove(livro);
    }

    public void exibirLivros(){
        if(biblioteca.isEmpty()){
            System.out.println("A biblioteca ainda não possui livros.");
        }
        else {
            System.out.println("Livros: ");
            System.out.println("--------------");
            for (ClassLivro livro : biblioteca){
                System.out.println(livro);
            }
        }
    }
}
