package Model;

import Interfaces.Comando;

public class ComandoLigarLuz implements Comando {
    public void executar(){
        System.out.println("A luz foi ligada!");
        System.out.println();
    }
}
