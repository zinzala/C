// %u is used to print unsigned decimal value
#include<stdio.h>
#include<limits.h>
int main(){
    unsigned int var1 = 0;
    unsigned int var2 = UINT_MAX;
    printf("the range of unsigned int is %u to %u", var1,var2);
    return 0;
}