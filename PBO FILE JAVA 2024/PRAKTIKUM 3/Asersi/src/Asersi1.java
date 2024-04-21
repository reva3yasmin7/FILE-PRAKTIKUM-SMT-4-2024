/**
 * File : Asersi1.java
 * Deskripsi: program utk menunjukkan asersi
 *
 */

public class Asersi1 {
    public static void main(String[] args){
        int x=0;
        if(x>0){
            System.out.println("x bilangan positif");
        }
        else{
            assert (x < 0): "ada kesalahan kode";
            //assert(x==-2): "Angka x= -2";
            //System.out.println("x bilangan negatif");
        }
    }
}
