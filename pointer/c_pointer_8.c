// Never ever try to return the address of an automatic variable
// this program generate error because we return the address of local variable which is going to destroy after function completion
#include<stdio.h>
int *fun(){
    int i = 9;  // an automatic variable
    return &i;
}
int main(){
    int *ptr = fun();
    printf("%d",*ptr);
    return 0;
}