// this program demonstrate how comma operator work
// first printf() function is evaluated and then 5 is return to the variabel 
// thus the output is hello world and 5
#include<stdio.h>
int main(){
    int var1 = (printf("%s\n","hello world!"),5);
    printf("%d",var1);
    return 0;
}