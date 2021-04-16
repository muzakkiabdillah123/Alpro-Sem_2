#include <stdio.h>
#include <stdlib.h>

#define max 10

int main()
{
    int array[max]={34,67,23,28,98,15,89,67,28,18};
    int i, temp, max_indeks, j;

    for(i=0; i<(max-1); i++)
    {
        max_indeks=i;           //(i=0) max_indeks = 0
                                //(i=1) max_indeks = 1
        for(j=(i+1);j<max;j++)
        {                                   //(i=0)                 //(i=1)
            if(array[max_indeks]<array[j])  //(j=1) 34<67 (TRUE)    //(j=1) 67<23 (FALSE)
            {                               //(j=2) 67<23 (FALSE)   //(j=6) 67<89 (TRUE)
                                            //(j=4) 67<98 (TRUE)

                max_indeks=j;               //(j=1) max_indeks = 1  //(j=6) max_indeks = 6
                                            //(j=4) max_indeks = 4
            }
        }

        temp=array[i];              //temp=array[0] (34)          //temp=array[1] (67)
        array[i]=array[max_indeks]; //array[0]=array[4] (98)      //array[1]=array[6] (89)
        array[max_indeks]=temp;     //array[4]=array[0] (34)      //array[6]=array[1] (67)
    }
    
    // (i=0)   ____________                     // (i=1)      _______________
    //        |           |                     //           |              |
    //      {98,67,23,28,34,15,89,67,28,18}     //      {98,89,23,28,34,15,67,67,28,18}

    for(i=0;i<max;i++)              
    {                               
        printf("%d ", array[i]);    
    }

    return 0;
}