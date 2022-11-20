#include<stdio.h>

int main()
{
    long int x=0;
    long int z=0;
    long int a=1;
    long int s=0;
    printf( "wpisz dowolna liczbe naturalna: \n");
    scanf("%ld", &x);
    
    while (a<=x)
        {
        z=a*a;
        s=z+s;
        a++;
        }
    printf("Suma kwadratow od 1 po liczby n wynosi: %ld\n", s);
    }