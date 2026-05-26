package Model;

public class ClassElemento {
    private int valor;

    public ClassElemento() {
        this.valor = 0;
    }

    public ClassElemento(int valor) {
        this.valor = valor;
    }

    public int getValor() {
        return this.valor;
    }

    @Override
    public String toString() {
        return "Elemento[" + this.valor + "]";
    }
}