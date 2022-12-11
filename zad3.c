#include<stdio.h>

int wypisz(int n, int a){

    if(a<=n){
        printf("%d \n", a);
        return wypisz(n, a+1);
    }
    else{
        return n;
    }
}

int main(){
    printf("liczby calkowite z przedzialu [1,2,...,n] dla n=%d to:", wypisz(10, 1));
}
