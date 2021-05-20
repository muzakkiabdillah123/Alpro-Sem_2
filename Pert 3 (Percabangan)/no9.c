/*9.Buatlah  algoritma  dalam  bahasa  C, berupa  menu  yang  dapat  memasukan  
pilihan  jika menginputkan karakter operator aritmatika ‘+’  akan  melakukan  
penjumlahan,  jika ‘-‘ pengurangan sampai karakter ‘*’, ‘/’ dan ‘%’ dua 
bilangan integer.

Contoh Masukan
Masukan bilangan pertama : 3
Masukan bilangan kedua :2
Masukan operator aritmatika :+

Contoh Keluaran
Hasil penjumlahan 3 dan 2 adalah : 5*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int a,b;
    char op;

    p("Masukkan bilangan pertama : ");
    s("%d",&a);
    p("Masukkan bilangan kedua : ");
    s("%d",&b);
    p("Masukkan operator aritmatika (+,-,*,/,%%) : ");
    s(" %c",&op);

    p("------------------------------\n");
    if (op=='+'){
        int hasil = a+b;
        p("Hasil penjumlahan %d dan %d adalah : %d\n", a,b,hasil);
    } else if (op=='-'){
        int hasil = a-b;
        p("Hasil pengurangan %d dan %d adalah : %d\n", a,b,hasil);
    } else if (op=='*'){
        int hasil = a*b;
        p("Hasil perkalian %d dan %d adalah : %d\n", a,b,hasil);
    } else if (op=='/') {
        int hasil = a/b;
        p("Hasil pembagian %d dan %d adalah : %d\n", a,b,hasil);
    } else if (op=='%') {
        int hasil = a%b;
        p("Hasil modulus %d dan %d adalah : %d\n", a,b,hasil);
    }
    p("------------------------------\n");
    
    return 0;
}