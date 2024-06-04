// ,(comma) operator is having least precedence over =(assignment operator) thus the output of this program is 3 not 5
#include<stdio.h>
int main(){
    int A;
    A = 3, 4, 5;
    printf("%d",A);
    return 0;
}