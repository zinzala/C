// this program demonstrate how switch work
#include<stdio.h>
int main(){
    int var1,var2;
    char sign;
    float result;
    printf("enter first number: ");
    scanf("%d",&var1);

    printf("enter sign: ");
    scanf(" %c",&sign);

    printf("enter third number: ");
    scanf("%d",&var2);

    switch (sign)
    {
    case '+': 
        result = var1 + var2;
        printf("%d + %d = %.2f",var1,var2,result);
        break;
    case '-': 
       result = var1 - var2;
        printf("%d - %d = %.2f",var1,var2,result);
        break;    
    case '*':
       result = var1 * var2;
        printf("%d * %d = %.2f",var1,var2,result);
        break;
    case '/':
       result = (float)var1 / var2;
        printf("%d / %d = %.2f",var1,var2,result);
        break;
    default:
        printf("enter valid sign");
        break;
    }
    return 0;
}