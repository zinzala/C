// quize program
#include<stdio.h>
int main(){
    unsigned int var = 0;   // range is from 0 to 4294967295. if we exceed the range then cycle is start we again come to 0. also remember post fix
    while(var++ != 0);      // semicolon after while loop
    printf("%d",var);
    return 0;
}