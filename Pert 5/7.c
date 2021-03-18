#include <stdio.h>

#define p printf
#define s scanf

//fungsi
int ganjil(int a, int b)
{
    int jumlah;
    while(a<=b) {
        if (a%2 != 0) {
            p("%d ",a);
            jumlah = jumlah+a;
        }
        a++;
    }
    return(jumlah);
}

int main(){
    int a,b,hasil;
    
    p("Masukkan angka pertama = ");
    s("%d",&a);
    p("Masukkan angka terakhir = ");
    s("%d",&b);

    hasil = ganjil(a,b);
    p("\nJumlah dari semua angka ganjil : %d",hasil);
    
    return 0;
}