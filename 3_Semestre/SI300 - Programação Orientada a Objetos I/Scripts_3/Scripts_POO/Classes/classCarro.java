package Model;

public class classCarro {
    private String modelo;
    private classMotor motor;

    public classCarro (String modelo, double potencia){
        this.modelo = modelo;
        this.motor = new classMotor(potencia);
    }
    public void exibirCarro(){
        System.out.println("O modelo do carro é: " + this.modelo);
        System.out.println("A potência do motor é: " + this.motor.getMotor());
        System.out.println();
    }
}
