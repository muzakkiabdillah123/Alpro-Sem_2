#include <stdio.h>

int main(){
    int a,b;
    
    printf("Masukkan angka pertama = ");
    scanf("%d",&a);
    printf("Masukkan angka terakhir = ");
    scanf("%d",&b);


    while(a<=b) {
        if (a%2 != 0) {
            printf("%d ",a);
        }
        a++;
    }
    
    return 0;
}