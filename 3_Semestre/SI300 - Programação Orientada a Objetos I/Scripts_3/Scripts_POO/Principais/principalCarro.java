package Main;
import Model.classCarro;

public class principalCarro {
    public static void main(String[] args) {
        classCarro carro1 = new classCarro("Fusca", 50);
        classCarro carro2 = new classCarro("Civic", 155);
        classCarro carro3 = new classCarro("Ferrari", 800);

        carro1.exibirCarro();
        carro2.exibirCarro();
        carro3.exibirCarro();
    }
}
