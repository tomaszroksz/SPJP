#include<stdio.h>

void znak(int i, char tablica[20])
{

printf ("znak i-ty tablicy to: %c \n", tablica[i]);

}
int main()
{  
    char tablica[20];
    int i;

printf ("Hello, please write a word:\n");
scanf ("%s", tablica);

printf ("Hello, please write a number:\n");
scanf ("%d", &i);

znak(i, tablica);
}