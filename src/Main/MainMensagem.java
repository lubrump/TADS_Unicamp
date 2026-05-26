package Main;
import Interfaces.Mensagem;
import Model.ClassEmail;
import Model.ClassSMS;

import java.util.ArrayList;

public class MainMensagem {
    public static void main(String[] args) {
        ArrayList<Mensagem> listaMensagem = new ArrayList<>();

        listaMensagem.add(new ClassEmail());
        listaMensagem.add(new ClassSMS());

        for (Mensagem m : listaMensagem){
            m.enviar();
        }
    }
}
