#include<stdio.h>

int main(void){

int tablica[10];
int i;
for(i=0; i<10; i++){
    printf("podaj %d element tablicy \n", i);
    scanf("%d", &tablica[i]);
}


for(i=0; i<10; i++){
    int *wsk=&tablica[i];
    printf("%d element tablicy to %i\n", i, *wsk);
}

}