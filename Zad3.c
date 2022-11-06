#include<stdio.h>

int main()
{
int a, b;
printf( "Podaj liczbe nr 1 \n");

scanf("%d", &a);

printf( "Podaj liczbe nr 2 - musi byc inna niz liczba nr 1 \n");

scanf("%d", &b);

printf( "Wieksza liczba jest: \n");

if (a>b)
{
    printf("%d\n", a);
}else
{
printf ("%d\n", b);
}
}