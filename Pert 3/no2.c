/*2.
Buatlah algoritma dalam bahasa C, yang menerima masukan berupa 3 buah integer, 
periksa apakah masukan adalah ribuan.
*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,b,c;

    p("Masukkan angka pertama : ");
    s("%d",&a);
    p("Masukkan angka kedua : ");
    s("%d",&b);
    p("Masukkan angka ketiga : ");
    s("%d",&c);

    if(a>=1000 && b>=1000 && c>=1000){
        p("Semua angka adalah ribuan\n");
    }
    else {
        p("Tidak semua angka adalah ribuan\n");
    }
    return 0;
}