/*
2.
Buatlah algoritma dalam bahasa C, yang menerima inputan tiga buah masukan bilangan 
pecahan (ril) dan menampilkan hasil operasi (+,-,*,/) ketiga bilangan!
*/

#include <stdio.h>

int main(){
    float a;
    float b;
    float c;

    printf("Masukkan angka ke- 1 = ");
    scanf("%f", &a);
    printf("Masukkan angka ke- 2 = ");
    scanf("%f", &b);
    printf("Masukkan angka ke- 3 = ");
    scanf("%f", &c);

    float jml = a+b+c;
    float min = a-b-c;
    float kali = a*b*c;
    float bagi = a/b/c;

    printf("---------------------\n");
    printf("Penjumlahan\n");
    printf("%.5f + %.4f + %.3f = %.2f\n", a,b,c,jml);

    printf("\nPengurangan\n");
    printf("%f - %f - %f = %f\n", a,b,c,min);

    printf("\nPerkalian\n");
    printf("%f x %f x %f = %f\n", a,b,c,kali);

    printf("\nPembagian\n");
    printf("%f : %f : %f = %f\n", a,b,c,bagi);

    return 0;
}