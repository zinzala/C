//  this program demonstrate the arithmetic operator /(division) & %(mod)
// note %% print the single % on console. does not treated as format specifier
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);
    printf("%d / %d = %d\n",num1, num2, num1 / num2);
    printf("%d %% %d = %d",num1, num2, num1 % num2);
    //printf("division is: %d\n", num1 / num2);
    //printf("reminder is: %d", num1 % num2);
    return 0;
}