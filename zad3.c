#include<stdio.h>
//do dokonczenia
void zamiana(int * a, int * b){
    printf("adres a w funkcji void:%p, adres b: %p \n", a, b);

   // int * c;
   //c=&a;

   // a=*b;
   // b=*c;
    
    int * wskA=&a;
    int * wskB=&b;

    wskA=99;
   
}

int main(){
 int a=10, b=20, c;
 
    printf("wartosc a: %d, wartosc b: %d \n", a, b);

    zamiana(&a, &b);

    printf("wartosc a: %d, wartosc b: %d \n", a, b);
}
