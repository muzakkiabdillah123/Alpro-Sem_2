/*
9.Buatlah  algoritma  dalam  bahasa  C,menentukan  sebuah  bilangan  prima  atau  
komposit melalui  data  inputan  dari  scanf dengan batasan  inputan batasAwal  >=1  
dan  batasAkhir <=100

Contoh masukan
Masukan batasawal: 1
Masukan batasakhir: 100

Contoh keluaran
Bilangan prima 1 sd 100 adalah ...
Bilangan komposit 1 sd 100 adalah ...
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int awal,akhir;
    int i,j,y;
    int modul;

    p("Masukkan batas awal = ");
    s("%d",&awal);
    p("Masukkan batas akhir = ");
    s("%d",&akhir);

    if (awal>=1 && akhir <=100) {
        p("Bilangan prima adalah = ");
        for (i=awal ; i<=akhir ; i++) {
            y = 0;
            for (j=2 ; j<=i ; j++) {
                modul = i%j;
                if (modul == 0) {
                    y = y + 1;
                }
            }
            if (y == 1){
                p("%d ",i); 
            }
        }

        p("\nBilangan komposit adalah = ");
        for (i=awal ; i<=akhir ; i++) {
            y = 0;
            for (j=2 ; j<=i ; j++) {
                modul = i%j;
                if (modul == 0) {
                    y = y + 1;
                }
            }
            if (y > 1 || i == 1){
                p("%d ",i); 
            }
        }
        
    } else {
        p("Masukkan angka awal >= 1 dan akhir <= 100\n");
    }
    
    return 0;
}