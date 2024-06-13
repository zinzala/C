// what is the output of this program
#include<stdio.h>
int fun(int);
int main(){
    int var = fun(5);
    printf("%d", var);
    return 0;
}

int fun(int n){
    int x = 1; 
    int k;
    if(n==1){
        return x;
    }
    for(k = 1; k<n; ++k){
        x = x + fun(k) * fun(n-k);
    }
    return x;
}