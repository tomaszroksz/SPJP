#include<stdio.h>

int main()
{
    int tablica[3];
   
    printf( "wpisz element tablicy nr 1: \n");
    scanf("%d", &tablica[1]);

    printf( "wpisz element tablicy nr 2: \n");
    scanf("%d", &tablica[2]);

     printf( "wpisz element tablicy nr 3: \n");
    scanf("%d", &tablica[3]);

    tablica[1]*=tablica[1];
    tablica[2]*=tablica[2];
    tablica[3]*=tablica[3];
    

    printf("potegi podanych liczb to odpowiednio: %d, %d, %d\n", tablica[1], tablica[2], tablica[3]);

}