package Model;

import Interfaces.Pagamento;

public class PagamentoPix implements Pagamento {
    public void processarPagamento(){
        System.out.println("Processando pagamento Pix: Gerando QR Code...");
    }
}
