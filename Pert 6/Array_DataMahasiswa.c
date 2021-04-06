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
    char gender;
    int tugas;
    int uts;
    int uas;
    float akhir;
    float mutu;
    char index[2];
} mhs;

int urutan;
mhs data[50];

float rerata()
{
    int i=0;
    float hasil;

    for (i=0;i<=urutan;i++)
    {
        hasil = hasil + data[i].akhir;
    }
    float rerata = hasil/i;
    return (rerata);
}

float terkecil()
{
    int i=0;
    float terkecil = data[i].akhir;

	for(i=0; i<=urutan; i++)
    {
		if(data[i].akhir<=terkecil)
        {
			terkecil = data[i].akhir;
		}
	}
    return (terkecil);
}

float terbesar()
{
    int i=0;
	float terbesar = data[i].akhir;

	for(i; i<=urutan; i++)
    {
		if(data[i].akhir>=terbesar)
        {
			terbesar = data[i].akhir;
		}
	}
    return (terbesar);
}

void print_data()
{
    int i;
    p("\n\n\n\n\n*******************************************************************************\n");
    p("************************ Program Nilai Akhir Mahasiswa ************************\n");
    p("********* (Muzakki Abdillah, 2000532, muzakki.abdillah123@upi.edu) ************\n");

    for (i=0;i<=urutan;i++)
    {
        float nilai_akhir = ((float)data[i].tugas * 30/100) + ((float)data[i].uts * 30/100) + ((float)data[i].uas * 40/100);
		data[i].akhir = nilai_akhir;

		if(nilai_akhir>=92 && nilai_akhir<=100)
        {
			data[i].mutu = 4.0;
			strcpy(data[i].index,"A");
		} 
        else if(nilai_akhir>=86 && nilai_akhir<=91.9)
        {
			data[i].mutu = 3.7;
			strcpy(data[i].index,"A-");
		}
		else if(nilai_akhir>=81 && nilai_akhir<=85.9)
        {
			data[i].mutu = 3.4;
			strcpy(data[i].index,"B+");
		}
		else if(nilai_akhir>=76 && nilai_akhir<=80.9)
        {
			data[i].mutu = 3.0;
			strcpy(data[i].index,"B");
		}
		else if(nilai_akhir>=71 && nilai_akhir<=75.9)
        {
			data[i].mutu = 2.7;
			strcpy(data[i].index,"B-");
		}
		else if(nilai_akhir>=66 && nilai_akhir<=70.9)
        {
			data[i].mutu = 2.4;
			strcpy(data[i].index,"C+");
		}
		else if(nilai_akhir>=60 && nilai_akhir<=65.9)
        {
			data[i].mutu = 2.0;
			strcpy(data[i].index,"C");
		}
		else if(nilai_akhir>=55 && nilai_akhir<=59.9)
        {
			data[i].mutu = 1.0;
			strcpy(data[i].index,"D");
		}
		else if(nilai_akhir>=0 && nilai_akhir<=54.9)
        {
			int mutu = nilai_akhir/55*10;  
			data[i].mutu = (float)mutu/10;
			strcpy(data[i].index,"E");
		}

        p("\n**************************** Data Mahasiswa ke-%d ******************************\n",i+1);
        p("NIM Mahasiswa\t\t: %d\n", data[i].nim);
        p("Nama Mahasiswa\t\t: %s\n", data[i].nama);
        p("Kelas Mahasiswa\t\t: %s\n", data[i].kelas);
        p("Jenis Kelamin Mahasiswa\t: %c\n", data[i].gender);
        p("Nilai Tugas Mahasiswa\t: %d\n", data[i].tugas);
        p("Nilai UTS Mahasiswa\t: %d\n", data[i].uts);
        p("Nilai UAS Mahasiswa\t: %d\n", data[i].uas);
        p("Nilai Akhir Mahasiswa\t: %.1f\n", data[i].akhir);
        p("Indeks Huruf Mahasiswa\t: %s\n", data[i].index);
        p("Mutu Mahasiswa\t\t: %.1f\n", data[i].mutu);
    }
    
    float p_terbesar = terbesar();
    p("\n*******************************************************************************\n");
    p("*********************** Nilai Terbesar Mahasiswa : %.1f ***********************\n\n",p_terbesar);

    float p_terkecil = terkecil();
    p("*******************************************************************************\n");
    p("*********************** Nilai Terkecil Mahasiswa : %.1f ***********************\n\n",p_terkecil);

    float p_rerata = rerata();
    p("*******************************************************************************\n");
    p("*********************** Nilai Rata-rata Mahasiswa : %.2f *********************\n\n",p_rerata);

    p("\n***************************** Copyright @ 2021 ********************************\n\n");
    
}

void isian()
{
    int lanjut;
    char ulangi;
    do
    {
        p("\n\n\n\n\n*********************** Masukkan data Mahasiswa ke-%d **************************\n",urutan+1);
        p("Masukkan NIM Mahasiswa\t\t\t: ");
        s("%d", &data[urutan].nim);
        p("Masukkan Nama Mahasiswa\t\t\t: ");
        s(" %[^\n]s", &data[urutan].nama);
        p("Masukkan Kelas mahasiswa\t\t: ");
        s(" %[^\n]s", &data[urutan].kelas);
        p("Masukkan Jenis Kelamin mahasiswa\t: ");
        s(" %c", &data[urutan].gender);
        p("Masukkan Nilai Tugas mahasiswa\t\t: ");
        s("%d", &data[urutan].tugas);
        p("Masukkan Nilai UTS mahasiswa\t\t: ");
        s("%d", &data[urutan].uts);
        p("Masukkan Nilai UAS mahasiswa\t\t: ");
        s("%d", &data[urutan].uas);

        do
        {
            p("Ingin menambah data lagi? Tekan (Y/N) dan enter : ");
            s(" %c", &ulangi);
            if (ulangi == 'Y')
            {
                urutan++;
            }
        } while (ulangi != 'Y' && ulangi != 'N');

        p("\n***************************** Copyright @ 2021 ********************************\n\n");

    } while (ulangi == 'Y');    
    
    if (ulangi == 'N')
    {
        print_data();
    }
}

int main(){
    int masukan;
    
    p("*******************************************************************************\n");
    p("************************ Program Nilai Akhir Siswa ****************************\n");
    p("********* (Muzakki Abdillah, 2000532, muzakki.abdillah123@upi.edu) ************\n\n");
    p("# PILIHAN MENU\n");
    p("[1] Memasukan dan Menampilkan Nilai Siswa \n\n");
    p("Silahkan pilih nomor menu lalu tekan enter : "); 
    s("%d",&masukan);
    p("\n***************************** Copyright @ 2021 ********************************\n\n");

    if (masukan==1)
    {
        isian();
    }

    return 0;
}