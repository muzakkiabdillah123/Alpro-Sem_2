/*12.Menentukan  Hari  Keberapa  dalam  tahun  berjalan,  berdasarkan  tanggal  dan  
bulan  yang diinput pada tahun berjalan. (Asumsi bulan februari=28 hari). 
Contoh jika diinput tanggal 20 bulan 1, maka Hari Ke 20. Jika diinput tanggal 1 bulan 3, 
maka Hari Ke-60 (31+28+1) dst.*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int hari, bulan;

    p("Masukkan tanggal = ");
    s("%d", &hari);
    p("Masukkan bulan = ");
    s("%d", &bulan);

    int total_bulan;

    switch(bulan){
        case 1: total_bulan = 0;break;
        case 2: total_bulan = 31;break;
        case 3: total_bulan = 31+28;break;
        case 4: total_bulan = 31+28+31;break;
        case 5: total_bulan = 31+28+31+30;break;
        case 6: total_bulan = 31+28+31+30+31;break;
        case 7: total_bulan = 31+28+31+30+31+30;break;
        case 8: total_bulan = 31+28+31+30+31+30+31;break;
        case 9: total_bulan = 31+28+31+30+31+30+31+31;break;
        case 10: total_bulan = 31+28+31+30+31+30+31+31+30;break;
        case 11: total_bulan = 31+28+31+30+31+30+31+31+30+31;break;
        case 12: total_bulan = 31+28+31+30+31+30+31+31+30+31+30;break;

        default:p("Bulan hanya 1-12\n");
    }

    int total = total_bulan+hari;
    p("Hari ke- %d\n", total);
    
    return 0;
}