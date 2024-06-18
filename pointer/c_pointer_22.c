#include<stdio.h>
#define N 5  // whenever preprocessor find N then it replace with 5
int main(){
    int arr[N], *ptr;
    printf("enter %d element of array",N);
    for(ptr = arr; ptr <= arr+N-1; ptr++){   // ptr = arr --> pointer is initialize with base address of array | arr+N-1 --> (1000)+5-1
        scanf("%d",ptr);  // ptr --> &arr[0] | we asking the user to enter the element at this address
    }

    printf("array element in reverse order is as follows\n");
    for(ptr = arr+N-1; ptr >= arr; ptr--){
        printf("%d ", *ptr);
    }
    return 0;
}