#include <stdio.h>

#define p printf
#define s scanf

void pola(int a)
{
    int i,j;

    if (a>=1 && a<=1000) {
        for (i=1 ; i<=a ; i++) {
            for (j=1 ; j<=i ; j++) { //jika 1 maka sekali, jika dua maka dua kali for dst
                p("* ");
            }
            p("\n");
        }
    } else {
        p("Masukkan angka antara 1 sampai 1000\n");
    }
}

int main(){
    int a;

    p("Masukkan jumlah N : ");
    s("%d",&a);

    pola(a);
    
    return 0;
}