#include<stdio.h>

int main()
{
int a, b;
printf( "Podaj rok w celu sprawdzenia czy jest on przestępny: \n");

scanf("%d", &a);

b=a%4;
printf("%d \n", b);

if (b!=0)
{
printf( "Podany rok jest nie jest rokiem przestępnym. \n");
}
else
{
printf( "Podany rok jest rokiem przestępnym. \n");
}

}