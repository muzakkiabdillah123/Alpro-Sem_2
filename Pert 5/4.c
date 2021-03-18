#include <stdio.h>

#define p printf
#define s scanf

void bilangan(int a, int b, int c)
{
    if(a>=1000 && b>=1000 && c>=1000){
        p("Semua angka adalah ribuan\n");
    }
    else {
        p("Tidak semua angka adalah ribuan\n");
    }
}

int main(){
    int a,b,c;

    p("Masukkan angka pertama : ");
    s("%d",&a);
    p("Masukkan angka kedua : ");
    s("%d",&b);
    p("Masukkan angka ketiga : ");
    s("%d",&c);

    bilangan(a,b,c);
    
    return 0;
}