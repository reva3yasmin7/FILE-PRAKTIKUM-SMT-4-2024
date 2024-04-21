/**
 * MBujurSangkar.java 20 Maret 2024
 * Penulis: Reva Yasmin Naufalia
 * Deskripsi: kelas yang meembuat implementasi interface
 *              pada bangun datar
 */
import static java.lang.Math.PI;
class Lingkaran implements IArea{
    private double jejari;

    public Lingkaran(double r){
        jejari=r;
    }
    @Override
    public double hitungLuas(){
        return PI*jejari*jejari;
    }
}

