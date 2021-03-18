#include <stdlib.h>
#include <stdio.h>
//deklarasi procedure
void tambah(int x,int y){
        printf("%d+%d=%d\n",x,y,x+y);
}
int kurang(int p,int q){
    return(p-q);
}
int main()
{
      int a,b,tampung;
      a=7;b=5;
      tambah(a,b);
      tampung=kurang(a,b);
      printf("%d-%d=%d",a,b,tampung);
      return 0;
}
