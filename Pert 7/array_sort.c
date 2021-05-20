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

void insertion (int type)
{
    int i,j,data_sisip;

    for(i=1;i<=urutan;i++)
    {
        mhs data_mhs = data[i];
        data_sisip = data[i].akhir;
        j=i-1;

        if (type == 1)
        {
            while ((data_sisip<data[j].akhir) && (j>=0))
            {
                data[j+1]=data[j];
                j=j-1;
            }
        }
        else 
        {
            while ((data_sisip>data[j].akhir) && (j>=0))
            {
                data[j+1]=data[j];
                j=j-1;
            }
        }
        data[j+1] = data_mhs;
    }
}

void selection (int type)
{
    int i,j,min_indeks;
    mhs temp;

    for(i=0; i<=(urutan-1); i++)
    {
        min_indeks = i;

        for(j=(i+1); j<=urutan; j++)
        {
            if (type == 1)
            {
                if(data[min_indeks].akhir>data[j].akhir)
                {
                    min_indeks = j;
                }
            }
            else 
            {
                if(data[min_indeks].akhir<data[j].akhir)
                {
                    min_indeks = j;
                }
            }
        }
        temp = data[i];
        data[i] = data[min_indeks];
        data[min_indeks] = temp;
    }
}

void print_data()
{
    int i;
    p("\n\n\n\n\n*******************************************************************************\n");
    p("************************ Program Nilai Akhir Mahasiswa ************************\n");
    p("********* (Muzakki Abdillah, 2000532, muzakki.abdillah123@upi.edu) ************\n");

    for (i=0;i<=urutan;i++)
    {
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

    //p("\n***************************** Copyright @ 2021 ********************************\n\n");
    
}

void isian()
{
    int sort,sort_type;
    char ulangi;
    do
    {
        p("\n\n\n\n\n*********************** Masukkan data Mahasiswa ke-%d **************************\n",urutan+1);
        // p("Masukkan NIM Mahasiswa\t\t\t: ");
        // s("%d", &data[urutan].nim);
        // p("Masukkan Nama Mahasiswa\t\t\t: ");
        // s(" %[^\n]s", &data[urutan].nama);
        // p("Masukkan Kelas mahasiswa\t\t: ");
        // s(" %[^\n]s", &data[urutan].kelas);
        // p("Masukkan Jenis Kelamin mahasiswa\t: ");
        // s(" %c", &data[urutan].gender);
        p("Masukkan Nilai Tugas mahasiswa\t\t: ");
        s("%d", &data[urutan].tugas);
        p("Masukkan Nilai UTS mahasiswa\t\t: ");
        s("%d", &data[urutan].uts);
        p("Masukkan Nilai UAS mahasiswa\t\t: ");
        s("%d", &data[urutan].uas);

        float nilai_akhir = ((float)data[urutan].tugas * 30/100) + ((float)data[urutan].uts * 30/100) + ((float)data[urutan].uas * 40/100);
		data[urutan].akhir = nilai_akhir;

		if(nilai_akhir>=92 && nilai_akhir<=100)
        {
			data[urutan].mutu = 4.0;
			strcpy(data[urutan].index,"A");
		} 
        else if(nilai_akhir>=86 && nilai_akhir<=91.9)
        {
			data[urutan].mutu = 3.7;
			strcpy(data[urutan].index,"A-");
		}
		else if(nilai_akhir>=81 && nilai_akhir<=85.9)
        {
			data[urutan].mutu = 3.4;
			strcpy(data[urutan].index,"B+");
		}
		else if(nilai_akhir>=76 && nilai_akhir<=80.9)
        {
			data[urutan].mutu = 3.0;
			strcpy(data[urutan].index,"B");
		}
		else if(nilai_akhir>=71 && nilai_akhir<=75.9)
        {
			data[urutan].mutu = 2.7;
			strcpy(data[urutan].index,"B-");
		}
		else if(nilai_akhir>=66 && nilai_akhir<=70.9)
        {
			data[urutan].mutu = 2.4;
			strcpy(data[urutan].index,"C+");
		}
		else if(nilai_akhir>=60 && nilai_akhir<=65.9)
        {
			data[urutan].mutu = 2.0;
			strcpy(data[urutan].index,"C");
		}
		else if(nilai_akhir>=55 && nilai_akhir<=59.9)
        {
			data[urutan].mutu = 1.0;
			strcpy(data[urutan].index,"D");
		}
		else if(nilai_akhir>=0 && nilai_akhir<=54.9)
        {
			int mutu = nilai_akhir/55*10;  
			data[urutan].mutu = (float)mutu/10;
			strcpy(data[urutan].index,"E");
		}

        do
        {
            p("\nIngin menambah data lagi? Tekan (Y/N) dan enter : ");
            s(" %c", &ulangi);
            if (ulangi == 'Y')
            {
                urutan++;
            }
        } while (ulangi != 'Y' && ulangi != 'N');
        
    } while (ulangi == 'Y');    
    
    if (ulangi == 'N')
    {
        do 
        {
            p("\n# Pilih menu urutkan nilai akhir mahasiswa : \n");
            p("[1] Insertion sort\n");
            p("[2] Selection sort\n");
            p("Silahkan pilih nomor menu lalu tekan enter : ");

            s("%d",&sort);

        } while (sort != 1 && sort !=2);

        do
        {
            p("\n# Pilih jenis sort : \n");
            p("[1] Ascending sort\n");
            p("[2] Descending sort\n");
            p("Silahkan pilih nomor menu lalu tekan enter : ");

            s("%d",&sort_type);
            
        } while (sort_type!=1 && sort_type !=2);

        if (sort == 1)
        {
            if (sort_type == 1)
            {
                insertion(1);
            }
            else
            {
                insertion(2);
            }
        }
        else 
        {
            if (sort_type == 1)
            {
                selection(1);
            }
            else
            {
                selection(2);
            }
        }

        print_data();
        
    }
}

int main()
{
    int masukan;

    do
    {
        p("*******************************************************************************\n");
        p("************************ Program Nilai Akhir Siswa ****************************\n");
        p("********* (Muzakki Abdillah, 2000532, muzakki.abdillah123@upi.edu) ************\n\n");
        p("# PILIHAN MENU\n");
        p("[1] Memasukan Nilai Siswa \n");
        p("[2] Menampilkan Nilai Siswa\n\n");
        p("Silahkan pilih nomor menu lalu tekan enter : "); 
        s("%d",&masukan);
        p("\n***************************** Copyright @ 2021 ********************************\n\n");
    } while (masukan != 1 && masukan !=2);
    
    if (masukan==1)
    {
        isian();
    }
    else if (masukan==2)
    {
        p("Data belum diinput\n\n");
    }

    return 0;
}