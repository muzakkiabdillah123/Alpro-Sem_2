/*17.Menghitung   lama   dalam   jam   dan   menit berdasarkan   selisih waktu   
dalam   menitberdasarkan jam mulai (jam,menit) dan jam selesai (jam menit) yang diinput.*/

#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int jam_mulai , menit_mulai , jam_keluar , menit_keluar;
    int lama_jam, lama, lama_lengkap, sisa_lama_lengkap;
    
    p("Masukkan jam mulai : ");
    s("%d:%d", &jam_mulai, &menit_mulai);
    p("Masukkan jam keluar : ");
    s("%d:%d", &jam_keluar, &menit_keluar);
    
    if (jam_mulai < jam_keluar){
        lama_jam = (jam_keluar - jam_mulai)*60;

    } else if(jam_mulai>jam_keluar) {
        lama_jam = ((12-jam_mulai) + jam_keluar)*60;

    } else if (jam_mulai == jam_keluar) {
        lama_jam = 0;
    }

    if (menit_mulai < menit_keluar){
        lama = (menit_keluar - menit_mulai) + lama_jam;
    } else if (menit_mulai > menit_keluar){
        lama = lama_jam - (menit_mulai - menit_keluar);
    } else if (menit_mulai == menit_keluar){
        lama = lama_jam;
    }
    
    lama_lengkap = lama/60;
    sisa_lama_lengkap = lama%60;

    p("Lama (menit) = %d\n",lama);
    p("Lama (Jam-menit) = %d jam %d menit\n", lama_lengkap, sisa_lama_lengkap);
    
    return 0;
}