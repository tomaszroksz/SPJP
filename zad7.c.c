#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d; int m; int y; int r;

    printf("Please write a day number:\n");
    scanf("%d", &d);

     printf("Please write a month number:\n");
    scanf("%d", &m);

      printf("Please write a year:\n");
    scanf("%d", &y);

    r=y%4;

    if (0>m>12)
    {
        printf("data jest nieprawidlowa");
    }
    else if (r==0 && m==2)
    {
        if (d<=29)
        {
            printf("data jest prawidlowa");
        }
        else
        {
            printf("data jest nieprawidlowa");
        }
    }

     else if (r!=0 && m==2)
    {
        if (0<d<=28)
        {
            printf("data jest prawidlowa");
        }
        else
        {
            printf("data jest nieprawidlowa");
        }

    }
    else if (m==1||m==3||m==5||m==7||m==8||m==10||m==11)
    {
         if (0<d<=31)
        {
            printf("data jest prawidlowa");
        }
        else
        {
            printf("data jest nieprawidlowa");
        }
    }
    else if (m==4 || m==6||m==9||m==11)
    {
         if (0<d<=30)
        {
            printf("data jest prawidlowa");
        }
        else
        {
            printf("data jest nieprawidlowa");
        }
    }
    else
    printf("zadenprzypadek");


}
