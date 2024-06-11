// static_scoping
#include<stdio.h>
int num1 = 10;  // global variables
int num2 = 20;
int main(){
    int num1 = 5;   // chang the value of global variable
    {
        int sum; // local variable to this scope
        sum = num1 + num2;
        printf("%d",sum);
    }
    return 0;
}