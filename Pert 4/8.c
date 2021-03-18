/*
8.Buatlah  algoritma  dalam  bahasa  C, ,  menghitung  rata-rata  dari  bilangan  yang  
diinput  dari alat masukan sebanyak n buah
*/

#include <stdio.h>

#define p printf
#define s scanf

int main () {
    int a,n;
    float total,angka;

    total = 0;

    p("Masukkan jumlah angka = ");
    s("%d", &n);

    for (a=1; a<=n ; a++) {
        p("Masukkan angka ke-%d = ",a);
        s("%f",&angka);
        total = total + angka;
    }
    p("Hasilnya adalah %.2f\n",total);
    p("Rata- ratanya adalah %.2f / %d = %.2f",total, n, total/n);
    
    return 0;
}