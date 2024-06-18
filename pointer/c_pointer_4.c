// this porgram demonstrate pointer
#include<stdio.h>
int main(){
    int var = 10;
    int *ptr1,*ptr2;
    ptr1 = &var;
    ptr2 = ptr1;
    printf("%d %d",*ptr1,*ptr2);
    return 0;
}