#include<stdio.h>

int ciag(int a, int b, int c, int n){

    if (a<b && c!=n){
        return ciag(a+b, b, c+1, n);
    }
    else if(a>=b && c!=n){
        return ciag(a, b+a, c+1, n);
    }
    else if(c==n && b>a){
        return b;
    }
    else if(c==n && a>=b){
        return a;
    }
}
int main(){
    printf("%d-ty wyrwaz ciagu fibonacciego to: %d", 10, ciag(1, 1, 2, 10));
}

