#include <stdio.h>

#define p printf
#define s scanf

void prima(int awal, int akhir)
{
    int i,j,y,modul;

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
}

int main(){
    int awal,akhir;

    p("Masukkan batas awal = ");
    s("%d",&awal);
    p("Masukkan batas akhir = ");
    s("%d",&akhir);
    
    prima(awal,akhir);

    return 0;
}