// local variable by default initilize to garbage value
// on the other hand global variable by default intilize the 0
#include<stdio.h>
int var1; // output: 0 in case of global variable
int main(){
    int var1;
    printf("%d",var1); // output: 3190784 in case of local variable
    return 0;
}