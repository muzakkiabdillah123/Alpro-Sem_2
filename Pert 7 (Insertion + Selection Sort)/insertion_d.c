#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={34,67,23,28,98,15,89,67,28,18};
    int i,j,data_sisip;
    
    for(i=1;i<10;i++)
    {                           //(i = 1)           //(i = 2)           //(i = 3)
        data_sisip = array[i];  //data_sisip = 67   //data_sisip = 23   //data_sisip = 28
        j=i-1;                  //j = 0             //j=1               //j=2
        
        while((data_sisip>array[j]) && (j>=0))  //(i = 1) 67>34 (TRUE) => j = -1, maka end while
        {                                       //(i = 2) 23>34 (FALSE)
                                                //(i = 3) 28>23 (TRUE) => 28>34 (array[1]) (FALSE), maka end while                                     

                                    //(i = 1)                   //(i = 3)
            array[j+1]=array[j];    //array[1]=array[0] (34)    //array[3]=array[2] (23)
            j=j-1;                  //j=0-1                     //j=2-1
        }
        
        array[j+1]=data_sisip;      //(i = 1) array[0]=67   (urutan = 67,34)
                                    //(i = 2) array[2]=23   (urutan = 67,34,23)
                                    //(i = 3) array[2]=28   (urutan = 67,34,28,23)   
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}