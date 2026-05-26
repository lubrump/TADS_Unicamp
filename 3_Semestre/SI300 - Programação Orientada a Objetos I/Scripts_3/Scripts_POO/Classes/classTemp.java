package Model;

public class classTemp {
    private double kelvin;
    private double celsius;
    private double fah;

    public void setTemp(double kelvin){
        this.kelvin = kelvin;
        this.celsius = kelvin - 273.15;
        this.fah = 1.8 * (kelvin - 273.15) + 32;
    }
    public double getKelvin(){
        return kelvin;
    }
    public double getCelsius(){
        return celsius;
    }
    public double getFah(){
        return fah;
    }
}
