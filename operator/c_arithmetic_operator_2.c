// this program demonstrate how operator precedence work
#include<stdio.h>
int main(){
    int num1 = 2, num2 = 3, num3 = 4, num4 = 5;
    printf("%d * %d / %d = %d\n", num1, num2, num3, num1 * num2 / num3);  // 2 * 3 / 4 = 1
    printf("%d + %d - %d = %d\n", num1, num2, num3, num1 + num2 - num3);   // 2 + 3 - 4 = 1
    printf("%d + %d * %d - %d %% %d = %d", num1, num2, num3, num4, num1, num1 + num2 * num3 - num4 % num1); // 2 + (12) - (1)  = 13 
    return 0;
}