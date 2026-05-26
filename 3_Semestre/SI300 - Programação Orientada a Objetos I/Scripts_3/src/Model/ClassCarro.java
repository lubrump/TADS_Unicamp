package Model;

public class ClassCarro {
    private String modelo;
    private String marca;
    private ClassMotor motor;

    public ClassCarro(String modelo, String marca, ClassMotor motor) {
        this.modelo = modelo;
        this.marca = marca;
        this.motor = motor;
    }

    @Override
    public String toString() {
        return "Carro: " + this.marca + " " + this.modelo + ", " + this.motor;
    }
}