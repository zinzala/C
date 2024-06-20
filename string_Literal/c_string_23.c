// application of function pointer
// calculator program
#include<stdio.h>
#define N 4
float addition(float num1,float num2){return num1 + num2;}
float subtraction(float num1,float num2){return num1 - num2;}
float multiplication(float num1,float num2){return num1 * num2;}
float division(float num1,float num2){return num1 / num2;}
int main(){
    float (*ptr2func[N])(float,float) = {addition,subtraction,multiplication,division};

    int choice;
    float num1,num2;
    printf("%s","ENTER YOUR CHOICE:\n"
                "0 for addition\n"
                "1 for subtraction\n"
                "2 for multiplication\n"
                "3 for division\n"
           );
    scanf("%d",&choice);
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);

    printf("%.2f", ptr2func[choice](num1,num2));
    return 0;
}