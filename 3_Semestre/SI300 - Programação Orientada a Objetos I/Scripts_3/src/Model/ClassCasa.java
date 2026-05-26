package Model;

import java.util.ArrayList;

public class ClassCasa {
    ArrayList<ClassComodo> comodos = new ArrayList<>();

    public void adicionarComodo(ClassComodo comodo){
        this.comodos.add(comodo);
    }

    public void exibirComodos(){
        if (comodos.isEmpty()){
            System.out.println("Esta casa ainda não possui cômodos.");
        }
        else {
            System.out.println("----------------------");
            System.out.println("Cômodos: ");
            for (ClassComodo comodo : comodos){
                System.out.println(comodo);
            }
        }
    }
}
