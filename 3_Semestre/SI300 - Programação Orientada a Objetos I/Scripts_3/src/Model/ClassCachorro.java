package Model;

public class ClassCachorro extends AbstractAnimal {

    public ClassCachorro(String nome, int idade){
        super(nome, idade);
    }

    @Override
    public void emitirSom() {
        System.out.println("Ele(a) está latindo.");
        System.out.println();
    }
}
