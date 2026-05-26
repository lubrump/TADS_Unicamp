package Model;

public class ClassGato extends AbstractAnimal {

    public ClassGato(String nome, int idade){
        super(nome, idade);
    }

    @Override
    public void emitirSom(){
        System.out.println("Ele(a) está miando.");
        System.out.println();
    }
}
