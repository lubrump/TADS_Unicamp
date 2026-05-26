package Model;

import Interfaces.TarefaAutomatizada;

public class LimpezaDisco implements TarefaAutomatizada{
    @Override
    public void executar(){
        System.out.println("Fazendo a limpeza do disco...");
    }
}
