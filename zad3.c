#include<stdio.h>

int main()
{
    int a, b, c=1, p=1;
   
    printf( "wpisz dowolna liczbe naturalna a: \n");
    scanf("%d", &a);

    printf( "wpisz dowolna liczbe naturalna b: \n");
    scanf("%d", &b);
     c==a;

    while (c<b)
    {
        c*=a;
        p++;
    }
    

    printf("Zeby a bylo wieksze od b musi zostac podniesione do potegi: %d\n", p);

}