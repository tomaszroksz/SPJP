#include<stdio.h>

int euklides(int a, int b){

    if(a>b && a!=0 && b!=0){
        return euklides(a%b, b);
    }
    else if(b>=a && a!=0 && b!=0){
        return euklides(a, b%a);
    }
    else if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
}

int main(){
    printf("NWD liczb %d i %d to:%d", 282, 78, euklides(282, 72));
}
