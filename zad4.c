#include<stdio.h>
#include<string.h>

int a=0; int b; int c=0; int d=1; int i;
char tablica[15];

void sprawdzenie()
    {
    c=strlen(tablica);
d=c/2;
printf("c po podliczeniu znakow to:%d \n", c);

    while (a<d)
    {
    if (tablica[a]==tablica[c-1])
    {
    a++;
    c--;
    }
    else
    {
    printf("dane slowo nie jest palindromem \n"); break;
    }
    }
if (d=a)
{
printf("dane slowo jest palindromem \n");

}
    }
void znak(int i, char tablica[20])
    {
    printf ("znak i-ty tablicy to: %c \n", tablica[i]);
    }

int main()
{   

    int i;

printf ("Hello, please write a word:\n");
scanf ("%s", tablica);

sprawdzenie();

}