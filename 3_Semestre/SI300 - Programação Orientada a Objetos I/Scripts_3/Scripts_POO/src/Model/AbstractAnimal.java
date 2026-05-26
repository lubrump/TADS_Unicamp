package Model;

public abstract class AbstractAnimal {
    protected String nome;
    protected int idade;

    public AbstractAnimal(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }

    public abstract void emitirSom();

    public String getNome(){
        return nome;
    }
    public int getIdade(){
        return idade;
    }
}
