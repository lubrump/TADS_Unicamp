package Model;

public class ClassLivro {
    private String titulo;
    private String autor;
    private int ano;

    public ClassLivro(String titulo, String autor, int ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }

    @Override
        public String toString(){
            return ("Título: " + this.titulo + ", Autor: " + autor + ", Ano de Lançamento: " + ano);
    }

}
