/*
3.Buatlah  algoritma  dalam  bahasa  C,mengulang  menuliskan teks 
“Saya  senang  belajar bahasa C” sebanyak N kali, dengan nilai N yang akan  
dibaca  dengan  scanf menggunakan perulangan  for
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a,n;

    p("Masukkan jumlah kalimat yang diinginkan = ");
    s("%d", &n);

    for (a=1; a<=n ; a++) {
        p("Saya senang belajar bahasa C\n");
    }
    
    return 0;
}