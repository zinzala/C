// as you see in the program ' int var1 = 10 ' is a global variable thats why it is visible to the all blocks or regions
// that way fun() print the value of global variable 
#include<stdio.h>
int fun();
int var1 = 10;

int main(){
    int var1 = 3;
    printf("%d\n",var1);
    fun();
    return 0;
}

int fun(){
    printf("%d",var1);
}