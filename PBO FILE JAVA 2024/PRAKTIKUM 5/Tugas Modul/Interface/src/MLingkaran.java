/**
 * MBujurSangkar.java 20 Maret 2024
 * Penulis: Reva Yasmin Naufalia
 * Deskripsi: kelas yang mengimplementasikan cara menghitung
 *          luas bujjur sangkar
 */
import java.util.Scanner;
public class MLingkaran {
    public static void main(String[] args) {
        Lingkaran l=new Lingkaran(10.2);
        System.out.println("Luas lingkaran dengan jejari 10.2 satuan adalah "+l.hitungLuas());
        Scanner scan=new Scanner(System.in);
        System.out.print("Masukkan jejari lingkaran: ");
        double jejari=scan.nextDouble();
        Lingkaran l2=new Lingkaran(jejari);
        System.out.print("Luas lingkaran dengan sisi "+jejari+ " satuan adalah "+l2.hitungLuas());
    }
}