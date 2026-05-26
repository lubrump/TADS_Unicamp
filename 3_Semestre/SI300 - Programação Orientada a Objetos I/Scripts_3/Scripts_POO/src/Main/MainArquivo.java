package Main;
import Interfaces.Arquivo;
import Model.Apresentacao;
import Model.DocumentoTexto;
import Model.Planilha;

import java.util.ArrayList;

public class MainArquivo {
    public static void main(String[] args) {
        ArrayList<Arquivo> listaArquivos = new ArrayList<>();

        listaArquivos.add(new DocumentoTexto());
        listaArquivos.add(new Planilha());
        listaArquivos.add(new Apresentacao());

        for (Arquivo a : listaArquivos){
            a.abrir();
        }
        System.out.print("Concluído, todos os arquivos foram abertos!");
    }
}
