#include <stdlib.h>
#include <stdio.h>
//deklarasi procedure
void kurang (int p,int q);
void tambah(int x,int y);
int main()
{
      int a,b,hsl;
      a=7;b=5;
      tambah(a,b);
      kurang(a,b);
      return 0;
}
void tambah(int x,int y){
        printf("%d+%d=%d\n",x,y,x+y);
}
void kurang (int p,int q){
  printf("%d-%d=%d\n",p,q,p-q);
}
