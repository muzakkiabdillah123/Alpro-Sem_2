#include <stdio.h>

#define p printf
#define s scanf

int main(){
    int i,j,n;

    p("Masukkan angka : ");
    s("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++) {     
            if (i==j){
                p("*  ");
            } else {
                p("   ");
            }
        }
        p("\n");
    }
    
    return 0;
}