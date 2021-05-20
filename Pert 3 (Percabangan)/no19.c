/*19.Menentukan N hari yang akan datang dimana N diinput dengan asumsi sekarang hari senin.*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int hari;

    p("Masukkan N hari yang akan datang = ");
    s("%d",&hari);

    int hasil = hari%7;

    switch (hasil){
        case 0 : p("SENIN\n");break;
        case 1 : p("SELASA\n");break;
        case 2 : p("RABU\n");break;
        case 3 : p("KAMIS\n");break;
        case 4 : p("JUMAT\n");break;
        case 5 : p("SABTU\n");break;
        case 6 : p("MINGGU\n");break;
        
        default : p("");
    }
    
    return 0;
}