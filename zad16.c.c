#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=0; int i=4; int tablica[4]={1, 2, 3, 4, 5};

    for (i=4; i>0; i--)
    {
        printf("Sprobuj odgadnac liczbe z zakresu 1-5. Pozsotalo %d szans.\n", i);
    scanf("%d", &tablica[1]);
    }
    for (i=5; i>0; i--)
    {
    if(tablica[1]==i || tablica[2]==i || tablica[3]==i || tablica[4]==i || tablica[5]==i)
    {
        continue;
    }
    else
    {
        printf("prawidlowa liczba to:%d \n", i); break;
    }
    }
}
