/*Menentukan  lama  bekerja  seseorang  berdasarkan  jam  masuk  dan  jam  keluar  
dengan asumsi  jam  hanya  1  sampai  dengan  12  dan  lama  bekerja  seorang  pegawai  
kurang  dari  12 jam.*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int masuk,keluar;

    p("Jam masuk = ");
    s("%d",&masuk);
    p("Jam keluar = ");
    s("%d",&keluar);
    
    if (masuk<keluar){
        int total = keluar - masuk;
        p("Lama bekerja = %d jam",total);
    } else {
        int total = (12-masuk) + keluar;
        p("Lama bekerja : %d jam", total);
    }

    return 0;
}