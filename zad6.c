#include<stdio.h>

int main()
{
    int tablica[3][5]=
    {
    {1, 0, 1, 1, 1},
    {1, 0, 1, 0, 1},
    {1, 0, 1, 0, 0}
    };
    int j=1, i;
    
        for (j=0; j<3; j++)
        {
        printf ("\n");
          for (i=0; i<5; i++)
         {
          if (tablica[j][i]==1)
          printf("x");
          else
          printf("-");
         }
        }
printf ("\n");
   

}