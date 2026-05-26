public class ClasseCarro {
    private String marca;
    private String modelo;
    private int ano;
    private boolean motorLigado;

    public ClasseCarro() {
        this.motorLigado = false;
    }

    public ClasseCarro(String marca, String modelo, int ano, boolean motorLigado) {
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
        this.motorLigado = motorLigado;
    }

    public void ligarMotor() {
        this.motorLigado = true;
        System.out.println("O motor foi ligado");
    }

    public void desligarMotor() {
        this.motorLigado = false;
        System.out.println("O motor foi desligado");
    }

    public String getMarca() { return marca; }
    public void setMarca(String marca) { this.marca = marca; }

    public String getModelo() { return modelo; }
    public void setModelo(String modelo) { this.modelo = modelo; }

    public int getAno() { return ano; }
    public void setAno(int ano) { this.ano = ano; }

    public boolean isMotorLigado() { return motorLigado; }
    public void setMotorLigado(boolean motorLigado) { this.motorLigado = motorLigado; }

    @Override
    public String toString() {
        return "Carro [Marca: " + marca + ", Modelo: " + modelo +
                ", Ano: " + ano + ", Motor Ligado: " + (motorLigado ? "Sim" : "Não") + "]";
    }
}