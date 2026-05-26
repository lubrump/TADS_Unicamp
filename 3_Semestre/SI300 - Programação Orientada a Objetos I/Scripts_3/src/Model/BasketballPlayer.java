package Model;

public class BasketballPlayer implements Comparable<BasketballPlayer>{
    String playerName;
    double playerHeight;

    public BasketballPlayer(String playerName, double playerHeight){
        this.playerName = playerName;
        this.playerHeight = playerHeight;
    }

    public double getPlayerHeight() {
        return playerHeight;
    }

    public String getPlayerName() {
        return playerName;
    }

    @Override
    public int compareTo(BasketballPlayer proxLista){
        return Double.compare(this.playerHeight, proxLista.playerHeight);
    }

    @Override
    public String toString(){
        return ("Nome: " + playerName + " | Altura: " + playerHeight);
    }
}




