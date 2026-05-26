public class CarroPrincipal {
    public static void main(String[] args) {
        ClasseCarro carro1 = new ClasseCarro();
        carro1.setMarca("Fiat");
        carro1.setModelo("Toro");
        carro1.setAno(2016);

        ClasseCarro carro2 = new ClasseCarro("Honda", "Civic", 2024, false);

        System.out.println("Carro 1 (Antes da alteração dos atributos): ");
        System.out.println(carro1.toString());
        System.out.println("Carro 2 (Após a alteração dos atributos): ");
        System.out.println(carro2.toString());

        carro1.ligarMotor();

        System.out.println(carro1);
    }
}