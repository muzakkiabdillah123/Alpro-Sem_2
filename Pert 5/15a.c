#include <stdio.h>

#define p printf
#define s scanf

void pola (int n)
{
    int i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++) {     //if i=2 j=2
            if (i==j){
                p("*  ");
            } else {
                p("   ");
            }
        }
        p("\n");
    }
}

int main(){
    int masukan;

    p("Masukkan angka : ");
    s("%d",&masukan);
    
    pola(masukan);

    return 0;
}