#include <stdio.h>

#define p printf
#define s scanf

void pola(int n)
{
    int i,j;

    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--) {     //perulangan 1 : j=4 ; 4>=1
            p("-  ");           //perulangan 2 : j=3 ; 3>=1 dst
        }
        p("*\n");               //diakhir setiap perulangan ada *
    }
}

int main(){
    int masukan;

    p("Masukkan angka : ");
    s("%d",&masukan);     //misal n = 4

    pola(masukan);
    
    return 0;
}