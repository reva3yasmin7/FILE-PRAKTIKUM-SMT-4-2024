//Nama File: Titik.java\
//Deskripsi file: membuat fungsi-fungsi yang digunakan untuk membuat variabel dengan class Titik
//Nama: Reva Yasmin Naufalia
//NIM: 24060122130075
//Lab Praktikum: Kelas C2
public class Titik
{
    private double absis, ordinat;
    //static double counterTitik;

    //Konstruktor
    //membuat objek titik dgn inisialisasi nilai absis dan ordinat
    public Titik(double absis,double ordinat){
        this.absis=absis;
        this.ordinat=ordinat;
    }

    //Membuat objek titik dgn inisialisasi absis 0 dan ordinat 0;
    public Titik()
    {	this(0,0);}
    public void setAbsis(double absis)
    {	this.absis=absis;	}

    public void setOrdinat(double ordinat)
    {	this.ordinat=ordinat;	}

    public double getAbsis()
    {	return this.absis;	}

    public double getOrdinat()
    {	return this.ordinat;	}
    ///static double getCounterTitik()
    //{	return counterTitik;}

    public double getJarakPusat()
    { return Math.sqrt(Math.pow(getAbsis(),2) + Math.pow(getOrdinat(),2));}

    public void refleksiX(Titik t){
        //absis=-(getAbsis());
        double ordinat=t.getOrdinat();
        ordinat *= -1;
        t.setOrdinat(ordinat);
    }
    public void refleksiY(Titik t){
        double absis=t.getAbsis();
        absis *=-1;
        t.setAbsis(absis);

    }
    public void getRefleksiX(Titik t){

        refleksiX(t);
        System.out.println("Posisi dari titik stlh refleksi = (" +t.getAbsis() + ","+ t.getOrdinat()+")");

    }
    public void getRefleksiY(Titik t){
        refleksiY(t);
    }

    //}
}