#include<stdio.h>

float main()
{
    int a, i;
   printf( "podaj rozmiar tablicy: \n");
    scanf("%d", &a);

    float tablica[a];
    int j=1;
   
   while (a>=j)
   {
    printf( "wpisz element tablicy nr %d: \n", j);
    scanf("%f", &tablica[j]);
    j++;
   }
    
    
      for (i=1; i<=a; i++)
    {
    printf("nr%d: %f\n",i , tablica[i]);
    }
   

}