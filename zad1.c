#include<stdio.h>

int silnia (int a,int b, int wynik)
{
    if (b<=a){
        return silnia(a, b+1, wynik+a);
    }
    else{
        return wynik;
    }
    }

int main() {
printf("6 silnia to: %d", silnia(6,1,0));
}

