// if we try to perform arithmetic on pointer that do not pointing to array element then it leads to undefined behaviour
#include<stdio.h>
int main(){
    int var = 10;
    int *ptr = &var;
    printf("%d",*(ptr+3));
    return 0;
}