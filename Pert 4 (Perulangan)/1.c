/*
1.Buatlah  algoritma dalam  bahasa  C, menampilkan  bilangan  dari  satu  sampai  
dengan  n, dimana n diinput dari alat masukan, n>=1
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a,n;
    a = 1;
    
    p("Masukkan batas akhir angka yang akan ditampilkan = ");
    s("%d",&n);

    if (n>=1) {
        while (a<=n) {
        p("%d ",a);
        a++;
        }
    } else {
        p("Masukkan hanya angka yang >=1");
    }
    

    return 0;
}