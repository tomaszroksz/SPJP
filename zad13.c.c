#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Dla 0 radianów wybierz 1 \n Dla 1/6 Pi rad wybierz 2 \n Dla 1/4 Pi rad wybierz 3\n Dla 1/3 Pi rad wybierz 4 \n Dla 1/2 Pi rad wybierz 5 \n");
    scanf("%d", &a);

    switch(a){
    case 1: printf("0 stopni");
    case 2: printf("60 stopni");
    case 3: printf("90 stopni");
    case 4: printf("120 stopni");
    case 5: printf("180 stopni");
    }


}
