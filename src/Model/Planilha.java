package Model;

import Interfaces.Arquivo;

public class Planilha implements Arquivo {
    @Override
    public void abrir(){
        System.out.println("Planilha: Carregando fórmulas e exibindo células...");
        System.out.println();
    }
}
