/**
 * File: Asersi2.java
 * Deskripsi: Program utk demo aasersi, yg akan menolakinput
 * jari-jari lingkaran yg bernilai nol
 * * NAMA: REVA YASMIN NAUFALIA
 *  * NIM: 24060122130075
 *  * TANGGAL: 6 MARET 2024
 *  * LAB PRAKTIKUM: PEMROGRAMAN BERBASIS OBJEK C2
 */

//Class Lingkaran
class Lingkaran {
    public double jariJari;
    public Lingkaran(double jariJari){
        this.jariJari=jariJari;
    }
    public double hitungKeliling(){
        double keliling=2*Math.PI*jariJari;
        return keliling;
    }
}
//class Asersi2
public class Asersi2{
    public static void main(String[] args){
        //Lingkaran a;
        double jariJari=-10;
        assert(jariJari>0): "JAri-jari tdk boleh nol!";
        //assert(jariJari>=0): "JAri-jari tdk boleh negatif!";
        Lingkaran aq = new Lingkaran(jariJari);
        double kelilingLingkaran=aq.hitungKeliling();
        System.out.println("Keliling Lingkarann = "+kelilingLingkaran);

    }
}
/**Jawaban pertanyaan:
 * Saat program dijalankan, program menghitung keliling lingkaran berdasarkan
 * nilai jariJari yang di-inisialisasi pd baris 26.
 * Ketika nilai di-set menjadi positif, negatif, maupun nol, program tetap
 * mengeluarkan nilai keliling. Sehingga disaat nilai jjariJAri<=0, tidak langsung
 * men-trigger pesan Asersi. Pesan aseri hanya muncul ketika dijalankan dengan terminal
 * dengan kode java -enableassertions Asersi2
 */