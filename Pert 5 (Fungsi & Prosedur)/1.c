/*
.Buatlah prosedur  atau fungsi algoritma dalam  
bahasa  C, menampilkan  bilangan  dari  satu 
sampai dengan n, dimana n diinput dari alat 
masukan, n>=1
*/

#include <stdio.h>

#define p printf
#define s scanf

//prosedur
void bilangan(int n)
{
    int a=1;
    if (n>=1) {
        while(a<=n){
            p("%d ",a);
            a++;
        }
    } else {
        p("Masukkan hanya angka yang >=1\n");
    }
}

int main(){
    int masukan;

    p("Masukkan batas akhir angka yang akan ditampilkan : ");
    s("%d",&masukan);

    bilangan(masukan);
    
    return 0;
}