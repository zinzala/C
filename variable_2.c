#include<stdio.h>
int main(){
    int num1 = 1, num2 = 2, num3 = 3 , num4 = 4;
    int result = (num1 + num2) * num3 / num4 ;
    printf("the result of this expression (%d + %d) * %d / %d",num1,num2,num3,num4);
    printf(" is %d", result);
    return 0;
}