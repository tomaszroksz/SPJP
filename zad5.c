#include<stdio.h>

int binarny(int a, int n, int c){
    if (c<=n){
        return binarny(a, n+1, c*2);
    }
    if(a<n && n!=1){
       printf("0");
        return binarny(a,n-1,c);
    }
    else if (a>n && n!=1){
        printf("1");
        return binarny(a, n-1, c);
    }

    else if (n==1){
        return 0;
    }
}

int main(){
    printf("liczb %d w postaci binarnej to: %d \n", 25, binarny(25, 1, 1));
    return 0;
}
