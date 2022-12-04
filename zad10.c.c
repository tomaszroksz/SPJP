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
    if (b+c>=a)
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
    if (a+c>=b)
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
    if (b+a>=c)
    {
        printf("trojkat git");
    }
    else
    {
        printf("trojkat nie git");
    }
}

}
