// as an actual parameter we can also pass constant value
#include<stdio.h>
int fun(int,int);
int main(){
    int sum = fun(5,5);
    printf("%d",sum);
    return 0;
}

int fun(int num1, int num2){
    return num1 + num2;
}