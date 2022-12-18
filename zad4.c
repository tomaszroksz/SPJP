#include<stdio.h>

int wskaznik(int * tablica, int rozmiar){
    int c=0;
        for (int i=0; i<rozmiar; i++){
            if (*tablica>c){
            printf("tablica %d", *tablica);
            c=tablica[i];
        }
        else{
        wskaznik(*tablica, rozmiar);
        }
    tablica++;
    }
}

int main(){
    int tablica[]={1, 2, 3, 2, 1};
    int rozmiar=5;
    int * wskA=&tablica[0];
    wskaznik(wskA, 5);
}