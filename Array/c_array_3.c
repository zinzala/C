// write a program to calculate number of array elements
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,8,9,1,2,3,4,5,6,8,9};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}