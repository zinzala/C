// accessing structure members using structure pointer
#include<stdio.h>
struct number
{
    int num1;
    int num2;
    int num3;
};

int main(){
    struct number var1 = {10,11,12};
    struct number *ptr = &var1;
    printf("%d %d %d",ptr->num1,ptr->num2,ptr->num3);  // ptr->num1 == (*ptr).num1 == (*&var1).num1
    printf("%d",var1.num1);
    return 0;
}