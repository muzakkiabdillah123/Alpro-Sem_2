/*
Nama : Muzakki Abdillah
1. Buatlah algoritma dalam bahasa C, yang menerima inputan tiga buah masukan bilangan bulat dan 
menampilkan hasil operasi (+,-,*,/) ketiga bilangan!
*/

#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("Masukkan angka ke- 1 = ");
    scanf("%d", &a);
    printf("Masukkan angka ke- 2 = ");
    scanf("%d", &b);
    printf("Masukkan angka ke- 3 = ");
    scanf("%d", &c);

    int jml = a+b+c;
    int min = a-b-c;
    int kali = a*b*c;
    int bagi = a/b/c;

    printf("---------------------\n");
    printf("Penjumlahan\n");
    printf("%d + %d + %d = %d\n", a,b,c,jml);

    printf("\nPengurangan\n");
    printf("%d - %d - %d = %d\n", a,b,c,min);

    printf("\nPerkalian\n");
    printf("%d x %d x %d = %d\n", a,b,c,kali);

    printf("\nPembagian\n");
    printf("%d : %d : %d = %d\n", a,b,c,bagi);

    return 0;
}