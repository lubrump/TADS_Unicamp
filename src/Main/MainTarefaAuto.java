package Main;

import Model.AgendadorDeTarefas;
import Model.AtualizacaoSistema;
import Model.Backup;
import Model.LimpezaDisco;

public class MainTarefaAuto {
    public static void main(String[] args) {
        AgendadorDeTarefas agendador = new AgendadorDeTarefas();

        agendador.agendar(new Backup());
        agendador.agendar(new LimpezaDisco());
        agendador.agendar(new AtualizacaoSistema());

        agendador.rodar();
    }
}
