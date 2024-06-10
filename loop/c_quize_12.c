// this program calculates the power of number weather exponent is negative or positive or base negative or positive
#include<stdio.h>
int main(){
    int BASE, EXPONENT,result = 0;
    int power = 1;
    double power1 = 1.0;
    printf("Enter base number: ");
    scanf("%d",&BASE);
    printf("Enter exponent number: ");
    scanf("%d",&EXPONENT);
    int c_EXPONENT = EXPONENT;

    if(EXPONENT > 0){
        while(EXPONENT != 0){
            power = power * BASE;
            EXPONENT--;
        }
        printf("%d^%d is %d",BASE,c_EXPONENT,power);
     }else{
        while (EXPONENT != 0)
        {
            power1 = power1 *(1.0/BASE);
            EXPONENT++;
        }
        printf("%d^%d is %.5f",BASE,c_EXPONENT,power1);
     }

    return 0;
}