#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a; double b;
    printf("Podaj wartosc kata w radianach\n");
    scanf("%lf", &a);

    b=a*360;

    printf("wartosc kata w stopniach to: %lf", b);
}
