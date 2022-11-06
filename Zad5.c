#include<stdio.h>

int main()
{
int a;
printf( "Podaj liczbe od 0 do 255 \n");

scanf("%d", &a);





if (a>64 && a<91)
{
printf( "Podana liczba odzwierciedla w tablicy ASCII litere alfabetu angielskiego. \n");
}
else if (a<123 && a>97)
{
printf( "Podana liczba odzwierciedla w tablicy ASCII litere alfabetu angielskiego. \n");
}
else
{
printf( "Podana liczba nie odzwierciedla w tablicy ASCII litery alfabetu angielskiego. \n");
}
}