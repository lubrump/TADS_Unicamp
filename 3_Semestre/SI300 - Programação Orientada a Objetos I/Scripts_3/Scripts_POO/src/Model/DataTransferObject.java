package Model;

public class DataTransferObject {
    double kelvin;

    public DataTransferObject(double kelvin) {
        if (kelvin < 0) {
            throw new IllegalArgumentException("Erro! A temperatura não pode ser menor do que zero.");
        }
        if (Double.isInfinite(kelvin)){
            throw new IllegalArgumentException("Erro! O valor excede o limite máximo do double aceito pelo Java.");
        }
        this.kelvin = kelvin;
    }

    public double getKelvin(){
        return kelvin;
    }

    public double getCelcius(){
        return kelvin + 273.15;
    }

    public double getFahreinheit(){
        return (kelvin - 32) * 5/9 + 273.15;
    }
}

