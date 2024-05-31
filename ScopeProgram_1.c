// as you see in the program var1 variable is local to the main function it is not global variable thats why error occurrs in program
#include<stdio.h>
int main(){
    int var1 = 34;
    printf("%d\n",var1);
    return 0;
}

int fun(){
   // printf("%d",var1);
}