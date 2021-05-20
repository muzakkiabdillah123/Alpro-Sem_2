/*
11.Buatlah  algoritma dalam  bahasa  C,menghitung  n!,  dimana  n>=0,  0!=1,  
dengan  tampilan sebagai berikut, jika diinput n=5, maka keluarannya harus 
5!=5*4*3*2*1=120
*/

#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int a,i,jumlah;

    i = 1;
    jumlah = 1;

    p("Masukkan angka untuk difaktorialkan = ");
    s("%d", &a);

    if (a>=1) {
        p("%d! = ",a);

        while(a>=i+1) {     //i+1 karena angka terakhir tidak ada tanda *
            p("%d * ",a);
            jumlah = jumlah*a;
            a--;
        }
        
        p("%d = %d",a,jumlah);  //a terakhir di print disini agar tidak ada tanda *

    } else if (a == 0) {
        p("%d! = 1\n",a);

    } else {
        p("Masukkan angka >= 0\n");
    }
    
    
    return 0;
}