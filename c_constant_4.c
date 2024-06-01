// first expansion then evaluation.
// pre processor first replace the macros with value.
#include<stdio.h>
#define add(x,y) x+y
int main(){
    printf("the result of a * b + c is %d", 5 * add(4,3)); // output is 23 not 35 becaue 5 * 4 + 3 = 23
    return 0;
}