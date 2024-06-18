// post increment
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = &arr[0];
    printf("%d ", *(ptr++));  // post increment move 1 position in forword direction
    printf("%d ", *ptr);      // second element of array 
    return 0;
}