#include<stdio.h>

int main()
{
int a, b, c, d, e, f, g;
printf( "Podaj liczbe nr 1 \n");

scanf("%d", &a);

printf( "Podaj liczbe nr 2 \n");

scanf("%d", &b);

c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("dodawanie\n");
printf("%d\n", c);
printf("odejmowanie\n");
printf("%d\n", d);
printf("mnozenie\n");
printf("%d\n", e);
printf("dzielenie\n");
printf("%d\n", f);
printf("reszta\n");
printf("%d\n", g);

return 0;
}