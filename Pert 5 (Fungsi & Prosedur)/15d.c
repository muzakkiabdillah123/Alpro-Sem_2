#include <stdio.h>

#define p printf
#define s scanf

void pola(int n)
{
    int i,j;
    
    if (n%2 != 0 && n>=5) {
        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++) {
                if (i==(n+1)/2 || j==(n+1)/2 || (i==1 && j<=(n+1)/2) || (j==1 && i>=(n+1)/2) || 
                (j==n && i<=(n+1)/2) || (i==n && j>=(n+1)/2) ) {
                    p("*  ");
                } else {                // 1 : vertikal 3           (tengah)
                    p("   ");           // 2 : horizontal 3         (tengah)
                }                       // 3 : (1-3) horizontal 1   (kiri atas)
            }                           // 4 : (3-5) vertikal 1     (kiri bawah) 
            p("\n");                    // 5 : (1-3) vertikal 5     (kanan atas)
        }                               // 6 : (3-5) horizontal 5   (kanan bawah)
    } else {
        p("Masukkan angka ganjil dan >= 5\n");
    }
}

int main(){
    int masukan;

    p("Masukkan angka : ");
    s("%d",&masukan);

    pola(masukan);
    
    return 0;
}