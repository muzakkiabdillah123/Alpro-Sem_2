#include <stdio.h>

#define p printf
#define s scanf

//fungsi
int ganjil(int a, int b)
{
    int total;
    while(a<=b) {
        if (a%2 != 0) {
            p("%d ",a);
            total = total+1;
        }
        a++;
    }
    return(total);
}

int main(){
    int a,b,hasil;
    
    p("Masukkan angka pertama = ");
    s("%d",&a);
    p("Masukkan angka terakhir = ");
    s("%d",&b);

    hasil = ganjil(a,b);
    p("\nBanyaknya angka ganjil adalah : %d",hasil);
    
    return 0;
}