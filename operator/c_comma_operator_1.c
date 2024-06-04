// this program demonstrate how ,(comma) operator work
// comma operator return rightmost operand in this case 15
#include<stdio.h>
int main(){
    int var1 = (5,10,15);
    printf("%d",var1);
    return 0;
}