// false = 0
// true = 1

#include<stdio.h>
int main(){
    int var1 = 3, var2 = 4;
    int incr;
    incr = (var2 > var1) && (var2 == 4); // first condition is true thats why 1 is store into incr variable(lvalue)
    printf("%d\n",incr); // 1
    printf("%d",var1);// 3
    return 0;
}