// this program demonstrate how scanf() works 
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("%d + %d = %d",num1,num2,num1+num2);
    return 0;
}