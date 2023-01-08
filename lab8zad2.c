#include<stdio.h>

int main(){
    int n=0;
    printf("podaj liczbe n:");
    scanf("%d", &n);
    int tab[n];
    for(int i=0; i<n; i++){
        printf("podaj %i element tablicy:", i+1);
        scanf("%d", &tab[i]);
    }
FILE *fp = fopen("parzyste.txt", "wt");

    for(int i=0; i<n; i++){
        if(tab[i]%2==0){
            fprintf(fp, "%d\n", tab[i]);
        }
    }
fclose(fp);

FILE *fl = fopen("nieparzyste.txt", "wt");

    for(int i=0; i<n; i++){
        if(tab[i]%2!=0){
            fprintf(fl, "%d\n", tab[i]);
        }
    }
fclose(fl);
}