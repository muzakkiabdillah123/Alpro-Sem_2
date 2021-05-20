/*10. Buatlah algoritma dalam bahasa C, yang menerima inputan tiga buah bilagan bulat 
berupa sisi atas, sisi alas, dan tinggi trapesium dan menampilkan luas trapesium*/

#include <stdio.h>
#define p printf
#define r return
#define s scanf

int main(){
    float atas;
    float alas;
    float tinggi;

    p("Masukkan panjang sisi atas dalam cm = ");
    s("%f", &atas);
    p("Masukkan panjang sisi alas dalam cm = ");
    s("%f", &alas);
    p("Masukkan panjang sisi tinggi dalam cm = ");
    s("%f", &tinggi);

    float luas = (atas+alas)*tinggi/2;

    p("Luas trapesium dengan panjang sisi atas %.0f cm, sisi alas %.0f cm dan tinggi %.0f cm adalah %.2f", atas, alas, tinggi, luas);

    r 0;
}
    
    
    