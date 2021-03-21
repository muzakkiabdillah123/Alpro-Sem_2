#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define p printf
#define s scanf

typedef struct
{
    int nim;
    char nama[50];
    char kelas[10];
    char gender[1];
    int tugas;
    int uts;
    int uas;
    float mutu;
    char index[2];
} mhs;

int urutan;
mhs data[50];

void print_data()
{
    int i; //i = pencacah
    p("*******************************************************************************\n");
    p("************************ Program Nilai Akhir Siswa ****************************\n");
    p("********* (Muzakki Abdillah, 2000532, muzakki.abdillah123@upi.edu) ************\n");

    for (i=0;i<=urutan;i++)
    {
        p("\n**************************** Data Mahasiswa ke-%d ******************************\n",i+1);
        p("NIM Mahasiswa : %d\n", data[i].nim);
        p("Nama Mahasiswa : %s\n", data[i].nama);
        p("Kelas Mahasiswa : %s\n", data[i].kelas);
        p("Jenis Kelamin Mahasiswa : %c\n", data[i].gender);
        p("Nilai Tugas Mahasiswa : %d\n", data[i].tugas);
        p("Nilai UTS Mahasiswa : %d\n", data[i].uts);
        p("Nilai UAS Mahasiswa : %d\n", data[i].uas);
        p("Indeks Huruf Mahasiswa : %s\n", data[i].index);
        p("Mutu Mahasiswa : %.1f\n", data[i].mutu);
    }
    
}

int main(){
    int masukan,lanjut;
    
    p("*******************************************************************************\n");
    p("************************ Program Nilai Akhir Siswa ****************************\n");
    p("********* (Muzakki Abdillah, 2000532, muzakki.abdillah123@upi.edu) ************\n\n");
    p("# PILIHAN MENU\n");
    p("[1] Memasukan dan Menampilkan Nilai Siswa \n\n");
    p("Silahkan pilih nomor menu lalu tekan enter : "); 
    s("%d",&masukan);

    if (masukan == 1)
    {
        do
        {
            p("\n*********************** Masukkan data Mahasiswa ke-%d **************************\n",urutan+1);
            p("Masukkan NIM Mahasiswa : ");
            s("%d", &data[urutan].nim);
            p("Masukkan Nama Mahasiswa : ");
            s(" %[^\n]s", &data[urutan].nama);
            p("Masukkan Kelas mahasiswa : ");
            s(" %[^\n]s", &data[urutan].kelas);
            p("Masukkan Jenis Kelamin mahasiswa : ");
            s(" %c", &data[urutan].gender);
            p("Masukkan Nilai Tugas mahasiswa : ");
            s("%d", &data[urutan].tugas);
            p("Masukkan Nilai UTS mahasiswa : ");
            s("%d", &data[urutan].uts);
            p("Masukkan Nilai UAS mahasiswa : ");
            s("%d", &data[urutan].uas);

            do
            {
                p("\n# PILIHAN MENU\n");
                p("[1] Tambah Data\n");
                p("[2] Tampilkan Seluruh Data\n\n");
                p("Silahkan pilih nomor menu lalu tekan enter : "); 
                s("%d",&lanjut);
                switch (lanjut)
                {
                    case 1 : urutan++;break;
                    //case 2 : urutan=50;break;

                    //default : p("\nMasukkan angka 1 atau 2\n");
                } 
            } while (lanjut != 1 && lanjut != 2);
        } while (lanjut == 1);    
    }

    print_data();

    return 0;
}