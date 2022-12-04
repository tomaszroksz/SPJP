#include <stdio.h>

int main()
{
    int a1; int b1; int a2; int b2; int a; int b; int pole; int o;

     printf("Please input a1 location:\n");
    scanf("%d", &a1);

     printf("Please input a2 location:\n");
    scanf("%d", &a2);

     printf("Please input b1 location:\n");
    scanf("%d", &b1);

     printf("Please input b2 location:\n");
    scanf("%d", &b2);

    a=a1-b1;
    b=a2-b2;

    pole=a*b;
    o=2*a+2*b;

    printf( "pole:%pole \n", pole);
    printf( "obwod:%o \n", o);

}
