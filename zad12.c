#include <stdio.h>

int main()
{
    int a;

    printf("Podaj liczbe:\n");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("liczba jest podzielna przez 2 \n");
    }

    else if (a%3==0)
    {
    printf("liczba jest podzielna przez 3 \n");
    }

     else if (a%4==0)
     {
    printf("liczba jest podzielna przez 4 \n");
     }

     else if (a%5==0)
     {
     printf("liczba jest podzielna przez 5 \n");
     }

     else if (a%6==0)
     {
    printf("liczba jest podzielna przez 6 \n");
     }

    else
    printf("liczba nie jest podzielna przez liczby  zakresu 2-6 \n");

}
