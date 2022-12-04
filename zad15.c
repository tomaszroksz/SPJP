#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=0; int i=3;

    for (i=3; i>0; i--)
    {
        printf("Sprobuj odgadnac liczbe z zakresu 1-5. Pozsotalo %d szans.\n", i);
    scanf("%d", &a);

        if(a==2)
        {
            printf("brawo, odgadles liczbe!\n"); break;
        }

        else if(i==0)
        {
            printf("skonczyly Ci sie szanse! \n");
        }

        else
        {
            printf("nie udalo sie!");
        }
    }
}
