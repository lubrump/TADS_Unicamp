package Main;
import Interfaces.Pagamento;
import Model.PagamentoCartao;
import Model.PagamentoPayPal;
import Model.PagamentoPix;

import java.util.ArrayList;

public class MainPagamento {
    public static void main(String[] args) {
        ArrayList<Pagamento> ListaDePagamentos = new ArrayList<>();

        //Adicionando diferentes objetos à mesma lista
        ListaDePagamentos.add(new PagamentoCartao());
        ListaDePagamentos.add(new PagamentoPayPal());
        ListaDePagamentos.add(new PagamentoPix());

        for (Pagamento p : ListaDePagamentos){
            p.processarPagamento();
        }
        System.out.println("Concluído!");
    }
}
