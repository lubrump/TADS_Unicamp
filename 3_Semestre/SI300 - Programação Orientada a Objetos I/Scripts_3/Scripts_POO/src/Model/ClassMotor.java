package Model;

public class ClassMotor {
    private int potencia;

    public ClassMotor(int potencia) {
        this.potencia = potencia;
    }

    @Override
    public String toString() {
        return "Motor de " + this.potencia + " cv";
    }
}