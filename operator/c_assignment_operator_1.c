// this program demonstrate how assignment operator(+=) work a += 1 is equivalent to a = a + 1;
#include<stdio.h>
int main(){
    char a = 7;
    a ^= 5;
    printf("%d", printf("%d", a += 3)); // output is 51 (5 is the value of a and 1 because one character successfuly printed)
    return 0;
}