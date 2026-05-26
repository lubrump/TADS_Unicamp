package Model;
import Interfaces.TarefaAutomatizada;
import java.util.ArrayList;
import java.util.List;

public class AgendadorDeTarefas {
    private List<TarefaAutomatizada> tarefas = new ArrayList<>();

    public void agendar(TarefaAutomatizada tarefa){
        this.tarefas.add(tarefa);
    }
    public void rodar(){
        for(TarefaAutomatizada t : tarefas){
            t.executar();
        }
    }
}
