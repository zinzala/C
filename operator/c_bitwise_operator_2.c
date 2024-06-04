// this program demonstrate how bitwise (<<)left shift operator work
// all bits shifted by 1 
// trailing space is filled with 0(zero)
// left shifting is equivalent  to multiplication by 2^rightOperand
// for example 3 * 2^1 
// 3 * 2^4 
#include<stdio.h>
int main(){
    char var1 = 3; // binary representation of 3 is = (0000 0011)
    printf("%d\n", var1<<1); // (0000 011_) <- bits are shifted 1 position and empty space is filled with 0(zero) thats why output is -> (0000 0110)
    printf("%d",var1<<4);  // bits are shifted 4 position and empty space is filled with 0(zero).
    return 0;
}