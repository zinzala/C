// this program demonstrate how bitwise (>>)right shift operator work
// all bits shifted by 1 
// leading space will filled with 0(zero)
// right shifting is equivalent  to division(/) by 2^rightOperand
// for example 3 / 2^1 = 1.5(after truncated) = 1 
// 32 / 2^4 = 32 / 16 = 2  
#include<stdio.h>
int main(){
    char var1 = 3; // binary representation of 3 is = (0000 0011)
    printf("%d\n", var1>>1); // (_000 0001) <- bits are shifted 1 position and empty space is filled with 0(zero) thats why output is -> (0000 0001)
    
    char var2 = 32;
    printf("%d", var2>>4);
    return 0;
}