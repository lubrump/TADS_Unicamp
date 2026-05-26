package Model;

public class classLivros {
    private String titulo;
    private String autor;
    private float preco;

    public String getTitulo(){
        return titulo;
    }
    public String getAutor(){
        return autor;
    }
    public float getPreco(){
        return preco;
    }

    public void setTitulo(String titulo){
        this.titulo = titulo;
    }
    public void setAutor(String autor){
        this.autor = autor;
    }
    public void setPreco(float preco) {
        if (preco >= 0) {
            this.preco = preco;
        }
    }
}
