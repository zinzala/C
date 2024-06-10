// in this program we adding two numbers without using + operator with the help of Hash adder logic
#include<stdio.h>
int main(){
    int num1, num2, result,carry;
    printf("Enter 2(two) digits: ");
    scanf("%d %d",&num1,&num2);
    int dnum1 = num1;
    int dnum2 = num2;
    while(dnum2 != 0){
        result = dnum1 ^ dnum2;
        carry = (dnum1&dnum2)<<1;
        dnum1 = result;
        dnum2 = carry;
    }

    printf("the sum of  %d and %d is: %d",num1,num2,result);
    return 0;
}