// this program demonstrate how bitwise ^(xor) operator work
#include<stdio.h>
int main(){
    int a = 4, b = 3;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("the value of a = %d and b = %d",a,b);
    return 0;
}