// this is a quize program
#include<stdio.h>
struct point{
    int num1,num2,num3;
};
int main(){
     struct point var ={.num2 = 0, .num1 = 4, .num3 = 2 };
     printf("%d %d %d",var.num1,var.num2,var.num3);    
    return 0;
}