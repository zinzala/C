// this program print the address of var variable in hexadecimal format
#include<stdio.h>
int main(){
    int var = 10;
    int *ptr = &var;
    printf("address of variable var is: %p ", ptr); //0061FF18
    return 0;
}