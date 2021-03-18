#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int n,i,j;

    p("Masukkan jumlah N (ganjil) : ");
    s("%d",&n); //misal 5
 
    if (n%2 != 0 && n>=5) {
        for (i=1; i<=n;i++){
            for (j=1;j<=n;j++){         //perulangan 1 : 1<=5
                if (j==i || j+i==n+1){  //(j=1) 1 = 1 (TRUE) atau 1+1==5+1 (FALSE) --> (j=5) 5 = 1 (FALSE) atau 5+1=5+1 (TRUE)  
                    p("*  ");
                } else {
                    p("   ");
                }
            }
            p("\n");
        }
    } else {
        p("N harus ganjil dan >= 5\n");
    }

    return 0;
    
}