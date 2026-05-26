package Model;

public class ClassComodo {
    private String nome;
    private float tamanho;
    private String materialPiso;

    public ClassComodo(String nome, float tamanho, String materialPiso) {
        this.nome = nome;
        this.tamanho = tamanho;
        this.materialPiso = materialPiso;
    }

    @Override
    public String toString() {
        return nome + ": " + tamanho + "m², piso: " + materialPiso + "";
    }
}
