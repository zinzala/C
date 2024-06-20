// this program demonstrate what happens in scenario of equal_lenght_of_initializer
#include<stdio.h>
int main(){
    char  A[5] = "hello";   // The string "hello" has 5 characters, including the null terminator ('\0').
    char B[5];
    for(int i = 0; A[i] != '\0'; i++){  // condition become never false because of inproper initialization
        B[i] = A[i];
    }
    printf("%s",B);   // undefined behaviour
    return 0;
}