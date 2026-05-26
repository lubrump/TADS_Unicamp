package Model;

public class classPotencia {
    public static double calcula(int base, int expoente){
        System.out.println("Método: calcula(int, int)");
        return Math.pow(base, expoente);
    }
    public static double calcula(int base, double expoente){
        System.out.println("Método: calcula(int, double)");
        return Math.pow(base, expoente);
    }
    public static double calcula(double base, double expoente){
        System.out.println("Método: calcula(double, double)");
        return Math.pow(base, expoente);
    }
}
