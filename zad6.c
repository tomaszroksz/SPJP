#include <stdio.h>


int suma(int tablica[]; int n, int wynik){
    if (n!=0){
        wynik+=tablica[n];
        return suma(tablica, n);
    }
    else{
        return wynik;
    }
}
int main(){
printf("suma cyfr liczby:12345 to: %d", suma(tablica[]={1, 2, 3, 4, 5}, 5, 0));


}
