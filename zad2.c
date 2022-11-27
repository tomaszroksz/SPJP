#include<stdio.h>

int a; int b; int c;

void sprawdzenie()
{
if (a=b)
{c=1 ;}

else
{c=0 ;}
}
int main()
{
printf ("Hello, please write first number:\n");
scanf ("%d", &a);

printf ("Please write second number:\n"); 
scanf ("%d", &b);

sprawdzenie();
printf ("c=%d:\n", c);
}