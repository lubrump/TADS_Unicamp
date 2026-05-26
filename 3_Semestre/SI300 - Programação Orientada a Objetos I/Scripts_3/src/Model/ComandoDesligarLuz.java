package Model;

import Interfaces.Comando;

public class ComandoDesligarLuz implements Comando {
    public void executar(){
        System.out.println("A luz foi desligada!");
        System.out.println();
    }
}
