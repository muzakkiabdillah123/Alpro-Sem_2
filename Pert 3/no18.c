/*18.Sebuah  acara  wisata  akam  menggunakan  mobil  berkapasitas  7  penumpang  per  mobil. 
Apabila   terjadi   kelebihanpenumpang   (meskipun   hanya   1   orang),   maka   mobil   yang 
digunakan  ditambah  1.  Buat  program  untuk  menghitung  jumlah  mobil  yang  diperlukan 
berdasarkan jumlah peserta yang akan ikut.*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int jml_orang;

    p("Masukkan jumlah orang = ");
    s("%d",&jml_orang);

    int jml_mobil = jml_orang/7;
    int sisa = jml_orang%7;

    if (sisa != 0){
        jml_mobil = jml_mobil + 1;   
    }
    
    p("Jumlah mobil yang disediakan = %d",jml_mobil);
    
    return 0;
}