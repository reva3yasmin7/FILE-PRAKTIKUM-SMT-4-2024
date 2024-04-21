import java.util.Scanner;
/**
 * MBujurSangkar.java 20 Maret 2024
 * Penulis: Reva Yasmin Naufalia
 * Deskripsi: kelas yang mengimplementasikan cara menghitung
 *          luas bujjur sangkar
 */
//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class MBujurSangkar {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        BujurSangkar bs=new BujurSangkar();
        System.out.print("Masukkan sisi bujur sangkar: ");
        double sisi=scan.nextDouble();
        System.out.print("Luas bujur sangkar dengan sisi "+sisi+ " satuan adalah "+bs.hitungLuas(sisi));

    }
}

/*variabel luas  berasal dari BangunDatar, sehingga ketika kelas BujurSAngkar
tidak melakukan implementasi thdp metode abstrak pada kelas BangunDatar, akan terjadi error.
Jika ingin menggunakan variabel luas tanpa menggunakan metode Abstrak BAngunDatar, bisa dengan mmenambahkan
definisi variabel luas pada kelas BujurSangkar
 */