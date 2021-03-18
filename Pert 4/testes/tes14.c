/*
14.Buatlah algoritma dalam bahasa C,menulis sebuah program yang akan mencetak berbagai output  
sebagai  berikut,  tergantung  nilai  N  yang  dibaca.  N  dapat  berharga  antara  
1  s.d. 1000.
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,i,j,k,l,m;

    p("Masukkan jumlah N : ");
    s("%d",&a);

    if (a>=1 && a<=1000) {
        for (i=1 ; i<=a ; i++) {
            p("o ");
        }
        p("\n");

        if (a>1){
            for (j=1 ; j<=a ; j++) {
                if(j==1 || j ==a && a!=2) p("o ");
                else p("* ");
            }          
        }
        p("\n");

        if (a>2){
            for (j=1 ; j<=a ; j++) {
                if(j==1 || j ==a || j==a-1 && j==2) p("o ");
                else p("* ");
            }
        }
        p("\n");

        if (a>3){
            for (i=1 ; i<=a ; i++) {
                p("o ");
            }
        }
    }
    
    return 0;
}