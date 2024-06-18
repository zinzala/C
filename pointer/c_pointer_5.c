// this program demonstrate pointer
#include<stdio.h>
int main(){
    int var1 = 10, var2 = 20;
    int *ptr1,*ptr2;
    ptr1 = &var1;  // address of var1
    ptr2 = &var2;  // address of var2
    *ptr1 = *ptr2; // content_of_var1(10) = content_of_var2(20)
    printf("%d", *ptr1); // 20
    return 0;
}