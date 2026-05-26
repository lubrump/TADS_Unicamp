package Model;

import Interfaces.Pagamento;

public class PagamentoPayPal implements Pagamento {
    public void processarPagamento(){
        System.out.println("Processando pagamento PayPal: Validando token de segurança...");
    }
}
