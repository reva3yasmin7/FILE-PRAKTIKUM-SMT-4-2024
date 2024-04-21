/*BangunDatar.java 20 Maret 2024
Penulis: Reva Yasmin Naufalia
Deskripsi: Kelas abstrak, berisi abstraksi bangun datar
 */
public abstract class BangunDatar {
    protected double luas;
    public abstract double hitungLuas(double sisi);

    public void setLuas(double l){
        luas=l;
    }
    public double getLuas(){
        return luas;
    }
}
