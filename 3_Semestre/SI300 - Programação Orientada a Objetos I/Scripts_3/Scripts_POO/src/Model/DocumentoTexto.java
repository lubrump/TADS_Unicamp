package Model;

import Interfaces.Arquivo;

public class DocumentoTexto implements Arquivo {
    @Override
    public void abrir(){
        System.out.println("Arquivo de texto: Abrindo no editor de notas...");
        System.out.println();
    }
}
