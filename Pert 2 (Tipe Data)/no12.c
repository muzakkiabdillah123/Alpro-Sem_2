/*
12. Pak Eki memiliki N ekor bebek. Ia ingin menempatkan bebek-bebeknya tersebut pada 
kandang-kandang. Ia juga ingin agar setiap kandang berisi paling banyak M ekor bebek.
Tentukan jumlah kandang paling sedikit yang diperlukan Pak Eki.
Batasan
1 ≤ N ≤ 1.000.000.000
1 ≤ M ≤ 1.000.000.000
Format Masukan
Sebuah baris berisi sebuah bilangan bulat N dan M, dipisahkan oleh sebuah spasi.
Format Keluaran
Sebuah baris berisi jumlah kandang paling sedikit.
Contoh Masukan
12 5
Contoh Keluaran
3
*/

#include <stdio.h>
#define p printf
#define r return
#define s scanf

int main(){
    int bebek;
    int max;
    
    p("Masukkan jumlah bebek Pak Eki dan Masukkan jumlah maksimal bebek dalam satu kandang (dipisahkan oleh spasi) \n==>");
    s("%d %d", &bebek, &max);

    int hasil = (bebek+max-1)/max;

    p("Jumlah kandang yang dibutuhkan adalah %d kandang", hasil);
    
    r 0;
}