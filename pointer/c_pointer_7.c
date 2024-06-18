// finding mid value of array
#include<stdio.h>
int *findMid(int arr[],int len){  // data_type of this function is int * it is indicating that we are returning some pointer or some address
                                  // int * means we are returning some address of integer and reciving this address we must have pointer.
    return &arr[len/2];
}
int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *mid = findMid(arr,len);
    printf("the middle value of array is: %d ", *mid);
    return 0;
}