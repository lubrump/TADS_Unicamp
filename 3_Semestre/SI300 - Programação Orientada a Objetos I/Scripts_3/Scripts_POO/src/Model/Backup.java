package Model;
import Interfaces.TarefaAutomatizada;

public class Backup implements TarefaAutomatizada{
    @Override
    public void executar(){
        System.out.println("Fazendo o Backup...");
    }
}
