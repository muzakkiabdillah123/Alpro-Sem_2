/*16.Menentukan  biaya parkir  berdasarkan  lama parkir  yang  dihitung  berdasarkan  s
elisih  jam masuk  dan  jam  keluar  (dengan  ketentuan  seperti  soal  no  1).
Biaya  parkir  2  jam  pertama 1500 dan perjam berikutnya 1000*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int masuk,keluar;
    int total,biaya;

    p("Jam masuk = ");
    s("%d",&masuk);
    p("Jam keluar = ");
    s("%d",&keluar);
    
    if (masuk<keluar){
        total = keluar - masuk; 
    } else {
        total = (12-masuk) + keluar;
    }
    
    if (total<=2){
        biaya = 1500;
    } else {
        biaya = 1500 + ((total-2)*1000);
    }

    p("Lama parkir = %d jam\n",total);
    p("Biaya Parkir = %d",biaya);

    return 0;
}