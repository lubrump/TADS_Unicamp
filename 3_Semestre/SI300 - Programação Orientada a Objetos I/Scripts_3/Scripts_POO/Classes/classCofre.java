package Model;

public class classCofre {
    private double temp;
    private String carga;

    public classCofre (double temp){
        this.temp = temp;
    }
    public void mantemFrio(){
        if (temp < -273.15){
            System.out.println("A temperatura não pode mais ser reduzida!");
        }
        temp -= 0.5;
    }
    public void abrePorta(){
        if (temp + 3.0 > -196.0){
            System.out.println("A porta não pode ser aberta!");
        }
        else{
            temp += 3.0;
        }
    }
    public double fechaPorta(){
        return temp;
    }
    public double getTemp(){
        return temp;
    }
}
