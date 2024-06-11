// this program demonstrate how static scoping 
// how activation_record store in stack(call_stack)
// how push and pop works
#include<stdio.h>

int fun1(int);    // function_prototype
int fun2(int);    // function_prototype

int num = 5;     // global variable

int main(){
    int num = 10;
    num = fun1(num);
    printf("%d",num);
    return 0;
}

int fun1(int var1){
    var1 = var1 + 10;
    var1 = fun2(var1);
    return var1;
}

int fun2(int var2){
    int c;
    c = num + var2;
    return c;
}