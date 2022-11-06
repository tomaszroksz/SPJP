#include<stdio.h>

int main()
{
int a, b, c;
printf( "Podaj liczbe nr 1 \n");

scanf("%d", &a);

printf( "Podaj liczbe nr 2 - musi byc inna niz liczba nr 1 \n");

scanf("%d", &b);

printf( "Podaj liczbe nr 3 - musi byc inna niz liczba nr 1 i liczba nr 2 \n");

scanf("%d", &c);

printf( "Najwieksza liczba jest: \n");

if (a>b && a>c)
{
    printf("%d\n", a);
}if (b>a && b>c)
{
printf ("%d\n", b);
}else
{
printf ("%d\n", c);
}
}