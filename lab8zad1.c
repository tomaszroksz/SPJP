#include<stdio.h>

int main(){
    int tab[99];
    FILE *fp = fopen("liczby.txt", "rt");

    for(int i=0; i<100; i++){
        fscanf(fp, "%d", &tab[i]);
        }
    int a=0;
    for(int i=0; i<99; i++){
        if (tab[i]>a){
            a=tab[i];
        }
    }
fclose(fp);
printf("a=%d\n", a);
}