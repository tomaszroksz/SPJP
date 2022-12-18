#include<stdio.h>

int glob;

int funkcja(int x, int y){

    printf("adres zmiennej globalnej glob: %p \n", (void*)&x);
    printf("adres zmiennej globalnej a: %p \n", (void*)&y);
}

int main(void){
    int a;
     a=glob;
    printf("adres zmiennej globalnej glob: %p \n", (void*)&glob);
    printf("adres zmiennej globalnej a: %p \n", (void*)&a);

    funkcja(glob, a);
}