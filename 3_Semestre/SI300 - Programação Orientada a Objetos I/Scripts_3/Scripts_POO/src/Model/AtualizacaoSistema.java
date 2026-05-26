package Model;

import Interfaces.TarefaAutomatizada;

public class AtualizacaoSistema implements TarefaAutomatizada{
    @Override
    public void executar(){
        System.out.println("Fazendo a atualização do sistema...");
    }
}
