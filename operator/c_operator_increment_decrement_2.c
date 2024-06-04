// this program demonstrate how pre-increment/decrement and post-increment/decrement unary operator work
#include<stdio.h>
int main(){
    int num1 = 1;
    int num2 = num1++;
    printf("%d\n",num2);  // 1 

    int num11 = 11;
    int num12 = ++num11;
    printf("%d\n",num12); // 12

    int num21 = 21;
    int num22 = num21--;
    printf("%d\n",num22); //  21

    int num31 = 31;
    int num32 = --num31;
    printf("%d\n",num32); // 30
    
    return 0;
}