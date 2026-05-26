package Model;

import Interfaces.Arquivo;

public class Apresentacao implements Arquivo {
    @Override
    public void abrir(){
        System.out.println("Apresentação: Carregando slides e animações...");
        System.out.println();
    }
}
