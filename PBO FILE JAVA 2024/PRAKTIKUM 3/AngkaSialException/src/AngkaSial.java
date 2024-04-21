/**
 * File: AngkaSial.java
 * Deskripsi: Program penggunaan exception buatan sendiri
 *          Pengenalan klausa 'throw' dan 'throws'
 * NAMA: REVA YASMIN NAUFALIA
 * NIM: 24060122130075
 * TANGGAL: 6 MARET 2024
 * LAB PRAKTIKUM: PEMROGRAMAN BERBASIS OBJEK C2
 */
public class AngkaSial {
    public void cobaAngka(int angka)  throws AngkaSialException{
        //Menghubungkan cobaAngka dgn AngkaSialException
        ////Saaat kondisi di cobaAngka terpenuhi(angka==13),
        //Akan men-trigger error dan mencetak pesan error
        if (angka==13){
            //menyiapkan trigger error saat angka 13 diinput
            throw new AngkaSialException();
        }
        System.out.println(angka+" bukan angka sial");
    }
    public static void main(String[] args){
        AngkaSial as = new AngkaSial(); //variabel yg dipakai hrs beda dgn variabel utk definisi prosedur/fungsi
        try{
            as.cobaAngka(10);
            as.cobaAngka(13);//error ter-trigger, fungsi stlh ini (as.cobaAngka(12)) tdk dieksekusi
            as.cobaAngka(12);

        }catch(AngkaSialException ase){
            //method getMessage() telah ada pada kelas "Exception"
            System.out.println(ase.getMessage());
            System.out.println("hati-hati memasukkan angka!!");
        }
    }
}
//Jawaban Pertanyaan 1:
//Ketika terjadi eksepsi, baris 22 (as.cobaAngka(12)) tidak dieksekusi,
//karena error yang ter-trigger oleh baris sebelumnya (as.cobaAngka(13))
//mengeksekusi fungsi catch yang kemudian menghentikan jalannya program secara keseluruhan

/**Jawaban pertanyaan 2:
 * baris fungsi catch dieksekusi, karena terdapat baris yang men-trigger
 * error (baris 22, as.cobaAngka(13)), sehingga mencetak teks pesan error dan pesan
 * teks "HAti-hati memasukkan angka".
 */