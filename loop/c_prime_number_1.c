// this program check weather number is prime number or not 
#include<stdio.h>
int main(){
    int var1;
    printf("Enter number: ");
    scanf("%d",&var1);

    if(var1 == 1){
        printf("%d is not a prime number",var1);
    }else if(var1 == 2){
        printf("%d is a prime number",var1);
    }else if(var1 % 2 == 0){
        printf("%d is not a prime number", var1);
    }else{
        printf("%d is a prime number",var1);
    }
    return 0;
}