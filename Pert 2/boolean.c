/* File: boolean.c */
/* Penulis : Jedi Programer, email : erlangga@upi.edu*/
/* Deskripsi : */
/* Contoh perhitungan aljabar boolen, perhatikan cara penulisan
   AND dan OR serta NOT */
#include<stdio.h>

int main ()
{
    /* Kamus */
    int TRUE=1;
    int FALSE=0;
    /* Algoritma  */
    printf ("Ini nilai TRUE AND TRUE  : %d \n",  TRUE && TRUE );// 1*1=1
    printf ("Ini nilai TRUE OR FALSE  : %d \n",  TRUE || FALSE);// 1+0=1
    printf ("Ini nilai FALSE AND TRUE  : %d \n",  FALSE && TRUE );// 0*1=0
    printf ("Ini nilai FALSE OR FALSE  : %d \n",  FALSE || FALSE );// 0+0=0
    printf ("Ini nilai NOT TRUE  : %d \n", !TRUE);//0
    printf ("Ini nilai NOT FALSE  : %d \n", !FALSE );//1
    return 0;
}