#include <stdio.h>

int main()
{
    int a; int b; int c;
        printf("Please input a dimension:\n");
    scanf("%d", &a);

     printf("Please input b dimension:\n");
    scanf("%d", &b);

     printf("Please input c dimension:\n");
    scanf("%d", &c);

if (a>=b && a>=c)
{
    a=a*a;
    b=b*b;
    c=c*c;
    if (a==b+c)
    {
        printf("trojkat git");
    }
    else
    {
        printf("trojkat nie git");
    }
}

else if (b>=a && b>=c)
{
    a=a*a;
    b=b*b;
    c=c*c;
    if (b==a+c)
    {
        printf("trojkat git");
    }
    else
    {
        printf("trojkat nie git");
    }
}

else if(c>=a && c>=b)
{
    a=a*a;
    b=b*b;
    c=c*c;
    if (c==a+b)
    {
        printf("trojkat git");
    }
    else
    {
        printf("trojkat nie git");
    }
}

}
