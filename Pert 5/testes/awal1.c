#include <stdlib.h>
#include <stdio.h>
//prosedur namanya tambah (sub program tambah)
void tambah(int x,int y){
        printf("%d+%d=%d\n",x,y,x+y);
}
//prosedur namanya kurang (sub program kurang)
void kurang(int p,int q){
        printf("%d-%d=%d\n",p,q,p-q);
}
int main()
{
      int a,b;
      a=7;b=5;
      //pemanggilan prosedur
      tambah(a,b);
      kurang(a,b);
      return 0;
}
