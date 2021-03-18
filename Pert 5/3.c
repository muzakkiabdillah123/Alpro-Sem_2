#include <stdio.h>

#define p printf
#define s scanf

void bilangan(int n)
{
    int a;
    for (a=1; a<=n ; a++) {
        p("Saya senang belajar bahasa C\n");
    }
}

int main(){
    int masukan;

    p("Masukkan jumlah kalimat yang diinginkan = ");
    s("%d", &masukan);

    bilangan(masukan);
    
    return 0;
}