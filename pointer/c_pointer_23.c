// this program demonstrate how we can pass the array_name as an argument to other function
#include<stdio.h>
int add(int carr[],int clength){ // <-- int carr[] is an array that recieve the address thus we can say that int carr[] is nothing but pointer 
                                 //     we can also write like this int *b
    int sum = 0;
    for(int i = 0; i<clength; i++){
        sum += carr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("sum is: %d", add(arr,length));  // <-- we are not passing the whole array. we can use array_name as pointer
                                            //     thus we pass the base address of array
    return 0;
}