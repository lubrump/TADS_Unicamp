package Model;

import Interfaces.Pagamento;

public class PagamentoCartao implements Pagamento {
    @Override
    public void processarPagamento(){
        System.out.println("Processando pagamento cartão: Validando limite...");
    }
}
