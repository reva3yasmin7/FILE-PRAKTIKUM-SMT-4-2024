public class Garis {
    private double absis, ordinat;
    private Titik point1, point2;


    public Garis(Titik point1, Titik point2){
        this.point1=point1;
        this.point2=point2;
    }
    public Garis(){
        this(Titik(0,0),Titik(0,0));

    }
}