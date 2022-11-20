#include<stdio.h>

int main()
{
    long int x=0;
    long int i;
    long int a;

    printf( "wpisz dowolna liczbe naturalna: \n");
    scanf("%ld", &x);
    
    for (i=2; i<x; i++)
        {
        a=x%i;
        if (a==0)break;
        };
    if (a==0)
    {
       printf("Podana liczba nie jest liczba pierwsza");
       
    }
    else
    {
    printf("Podana liczba jest liczba pierwsza\n");
    }
}