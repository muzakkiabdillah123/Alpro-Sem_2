#include <stdlib.h>
#include <stdio.h>
void tambah(int x,int y){
/*
nilai x dan y (parameter formal) kita rubah nilainya
*/
        x=x+10; //17
        y=y+10; //15
        printf("Nilai x+10 dalam procedure menjadi %d\n",x);
        printf("Nilai y+10 dalam procedure menjadi %d\n",y);
        printf("hasil eksekusi procedure tambah adalah %d\n",x+y);
}
int main()
{
      int a,b;
      a=7;
      b=5;
      //cek nilai aktual sebelum procedure dijalankan
      printf("Nilai a sebelum procedure tambah dijalankan=%d\n",a);
      printf("Nilai b sebelum procedure tambah dijalankan=%d\n",b);
      system("PAUSE");
      tambah(a,b);//call by value
      /*
      karakteristiknya: jika nilai parameter formal berubah pada
      procedure/function, maka nilai aktualnya tetap TIDAK BERUBAH, Mengapa??
      */
      system("PAUSE");
      //cek nilai aktual setelah procedure dijalankan
      printf("Nilai a setelah procedure tambah dijalankan=%d\n",a);
      printf("Nilai b setelah procedure tambah dijalankan=%d\n",b);
      system("PAUSE");
      return 0;
}