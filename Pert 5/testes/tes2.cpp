#include <stdlib.h>
#include <stdio.h>
void tambah(int &x,int &y){
	    x=x+2;
        y=y+2;
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
      tambah(a,b);//call by reference
      //cek nilai aktual setelah procedure dijalankan
      printf("Nilai a setelah procedure tambah dijalankan=%d\n",a);
      printf("Nilai b setelah procedure tambah dijalankan=%d\n",b);
      system("PAUSE");
      
	  return 0;
}
