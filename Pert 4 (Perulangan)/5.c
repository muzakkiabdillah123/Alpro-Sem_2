/*
5.Buatlah algoritma dalam bahasa C,Tuliskanlah sebuah program yang membaca sebuah nilai N, 
kemudian menuliskan hasil penjumlahan deret tambah 1+2+3+4+5+6+ . . . +N= XXXX.
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a,n,total;

    total = 0;

    p("Masukkan jumlah deret = ");
    s("%d",&n);

    for (a=1; a<=n-1 ; a++) { //n-1 karena %d terakhir, tanda (+) diganti (=)
        p("%d + ",a);
        total = total + a;
    }
    p("%d = %d",a,total+a);  //%d terakhir tanpa tanda (+) tapi (=)
    
    return 0;
}
