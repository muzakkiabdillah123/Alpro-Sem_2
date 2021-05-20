#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int i,j,n;

    p("Masukkan angka : ");
    s("%d",&n);     //misal n = 4

    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--) {     //perulangan 1 : j=4 ; 4>=1
            p("   ");           //perulangan 2 : j=3 ; 3>=1 dst
        }
        p("*\n");               //diakhir setiap perulangan ada *
    }

    return 0;
}