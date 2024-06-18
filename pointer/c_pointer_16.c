// we can use array name as a pointer 
#include<stdio.h>
int main(){
    int arr[5];
    *arr = 15;    // *arr = 15 == *(1000) = 15
    printf("%d",arr[0]);
    
    return 0;
}