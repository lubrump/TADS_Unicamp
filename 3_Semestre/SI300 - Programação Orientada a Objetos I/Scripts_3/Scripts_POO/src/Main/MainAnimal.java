package Main;

import Model.AbstractAnimal;
import Model.ClassCachorro;
import Model.ClassGato;

import java.util.ArrayList;
import java.util.List;

public class MainAnimal {
    public static void main(String[] args) {
        List<AbstractAnimal> listaAnimais = new ArrayList<>();

        listaAnimais.add(new ClassCachorro("Amora", 4));
        listaAnimais.add(new ClassGato("Marie", 2));
        listaAnimais.add(new ClassGato("Ada", 5));
        listaAnimais.add(new ClassCachorro("Pretinho", 6));

        for (AbstractAnimal animal : listaAnimais){
            System.out.println("Nome: " + animal.getNome());
            System.out.println("Idade: " + animal.getIdade());
            animal.emitirSom();
        }
    }
}
