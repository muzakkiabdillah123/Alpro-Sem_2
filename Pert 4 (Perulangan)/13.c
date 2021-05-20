/*
13.Buatlah algoritma dalam bahasa C,menulis sebuah program yang akan mencetak 
berbagai output sebagai berikut, tergantung nilai N yang dibaca. N dapat berharga 
antara 1 s.d. 1000
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,i,j;

    p("Masukkan jumlah N : ");
    s("%d",&a);

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
    
    
    return 0;
}