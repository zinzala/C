// this program demonstrate how hexadecimal value is printed and what is the format specifier to print hexadecimal value
#include<stdio.h>
int main(){
    int var1 = 0x44FF;
    //printf("%x",var1); // output is 44ff in case of small %x
    printf("%X",var1);  // output is 44FF in case of capital %X
    return 0;
}