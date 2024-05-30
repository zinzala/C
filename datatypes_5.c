// range of unsigned short integer
#include<stdio.h>
#include<limits.h>
int main(){
    short unsigned int var1 = 0;
    short unsigned int var2 = USHRT_MAX;
    printf("the range of short unsigned int is from %u to %u", var1, var2);
    return 0;
}