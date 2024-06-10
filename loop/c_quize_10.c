// this is program demonstrate fibonacci 
#include<stdio.h>
int main(){
    int num1 = 0;
    int num2 = 1;
    int var,result;
    printf("Enter number: ");
    scanf("%d",&var);

    for(int i = 1; i <= var; i++){
        printf("%d ",num1);
        result = num1 + num2;
        num1 = num2;
        num2 = result;
    }
    return 0;
}