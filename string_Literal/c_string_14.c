// this program demonstrate how strncpy function work
#include<stdio.h>
#include<string.h>
int main(){
    char arr1[6] = "hello";
    char arr2[6];
    strncpy(arr2,arr1, sizeof(arr2));  // strncpy does not add the null character at the end of string
    arr2[sizeof(arr2) - 1] = '\0';     // there for we need to add that 
    printf("%s",arr2);
    return 0;
}