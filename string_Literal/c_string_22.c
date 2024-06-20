// calculator program
#include<stdio.h>
float addition(float num1,float num2){return num1 + num2;}
float subtraction(float num1,float num2){return num1 - num2;}
float multiplication(float num1,float num2){return num1 * num2;}
float division(float num1,float num2){return num1 / num2;}
int main(){
    int choice;
    float num1,num2;
    printf("%s","ENTER YOUR CHOICE:\n"
                "1 for addition\n"
                "2 for subtraction\n"
                "3 for multiplication\n"
                "4 for division\n"
           );
    scanf("%d",&choice);
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);

    switch(choice){
        case 1: printf("the addtion is: %.2f",addition(num1,num2)); 
              break;
        case 2: printf("the subtraction is: %.2f",subtraction(num1,num2));
              break;
        case 3: printf("the multiplication is: %.2f",multiplication(num1,num2));
              break;
        case 4: printf("the division is: %.2f",division(num1,num2));
              break;
        default: printf("enter constant integer");
              break;
    }
    return 0;
}