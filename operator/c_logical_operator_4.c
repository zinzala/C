// false = 0
// true = 1
#include<stdio.h>
int main(){
    int var1 = 3, var2 = 5;
    int incr;
    incr = (var1 == 3) || (var2++); // if expression return any value other then 0 it means it is treated as true
    printf("%d\n",incr); // 1
    printf("%d",var2);  // first condition is true thats why other condition(in this case expression) is not evalute thats why output is 5
    return 0;
}