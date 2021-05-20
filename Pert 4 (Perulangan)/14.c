#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int n, i, j;

    p("Masukkan Angka : ");
    s("%d", &n);

    if (n>=1 && n<=1000) {
        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++) {
                if (i == 2 && i == j) {
                    p("* ");
                } else if (i == 1 || i == n || j == 1 || j == n) {
                    p("o ");            // 1 : atas
                } else {                // 2 : kanan
                    p("* ");            // 3 : kiri
                }                       // 4 : bawah
            }
            p("\n");    
        }
    } else {
        p("Masukkan angka >= 1 dan <= 1000\n");
    }
    
    return 0;
}
