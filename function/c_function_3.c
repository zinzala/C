// it is not necessary to declare funciton. if we define function above the main() function then we can ignore the function_prototype.
// NOTE: if you do not declare the function and also define the funciton below main() function then error occurred as follows: 
//      - implicit declaration of function 
//      -  conflicting fun() type
// this error occurrd because bydefualt comiple assume that type of the function is int and when compiler reached to the funciton definition
// see that function is char type. thats why conflicting error is occurred.
#include<stdio.h>

char fun(){
    return 'a';
}

int main(){
    char c = fun();
    printf(" %c", c);
    return 0;
}

