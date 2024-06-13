// finding factorial using recursion 
#include<stdio.h>
int factorial(int var1){
    if(var1 == 1){
        return 1;
    }else{
        return var1 * factorial(var1 - 1);
    }
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("factorial of %d ia %d ",num, factorial(num));
    return 0;
}