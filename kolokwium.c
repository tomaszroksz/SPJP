#include<stdio.h>

char tablica[19];

void wypisz(n){

    if(n>0){
    for( int i=0; i<n; i++){
        printf ("%c", tablica[i]);
    }
    }
    else{
        printf("tablica jest pusta");
    }
}

void sprawdz(n){
int a=0;
    if (n<20){
        printf("podaj liczbe:");
        scanf("%d", &a);
        if (0<=a && a<256){
            n++;
            char c=a+'0';
            tablica[n]=c;
            }
        else{
            printf("podana liczba nie reprezentuje znaku w tablicy ascii");
        }
    }
    else{
    printf("w tablicy nie ma miejsca na nową cyfrę");
    }
}

void Sprawdz(n){
char a;
    if (n<20){
        printf("podaj znak:");
        scanf("%c", &a);
        if (0<=a && a<256){
            n++;
            tablica[n]=a;
            }
        else{
            printf("podana liczba nie reprezentuje znaku w tablicy ascii");
        }
    }
    else{
    printf("w tablicy nie ma miejsca na nową cyfrę");
    }
}

void indeks(n, x){
        
        if (x>=0 && x<=n){
            n--;
         
                tablica[x-1]=tablica[x];
                x++;
                tablica[n]=0;
                printf("tablica zmniejszona");
        return indeks(n, x);
        }
        else{
            printf("podaj indeks:");
            scanf("%d", &x);
            if(x>0){
                return indeks(n, x);
            }
            else{
                return 0;
            }
            printf("indeks nie odzwierciedla elementu tablicy");
        }
}

void kwadrat(n){
int suma=0;
    if(n>0){
        for(int i=0; i<=n; i++){
           suma=+atoi(tablica[i]);
        }
    }
    else{
        if(suma>0){
            printf("suma to: %d", suma);
        }
        else{
            printf("tablica jest pusta");
        }
    }

}

void kolumny(n){
    int a=0;
    printf("podaj liczbe kolumn");
    scanf("%d", &a);
    int b=n/a;
    
        for(int i=0; i<n; i++){
            for(int c=0; c<b; c++){
                printf("%c", tablica[i]);
            }
        printf("\n");
        }    
}

void wiersze(n){
    int a=0;
    printf("podaj liczbe wierszy");
    scanf("%d", &a);
    int b=n/a;
    int z=a;
    
        for(int i=0; i<z; i++){
            for(int c=0; c<n; c+z){
                printf("%c", tablica[c]);
            }
        a++;
        printf("\n");
        }    

}



int main(){
    int n=20;
    int x=0;
    char a;
    while(1>0){

        printf("menu\n");
        scanf("%c", &a);

        switch(a){
            case 'e': return 0;
            case 'w': wypisz(n); break;
            case 'd': sprawdz(n); break;
            case 'D': Sprawdz(n); break;
            case 'u': indeks(n, a); break;
            case 's': kwadrat(n); break;
            case 't': kolumny(n); break;
            case 'T': wiersze(n); break;
            default: printf("bledny wybor, sprobuj jeszcze raz\n"); break;
        }
    }
}