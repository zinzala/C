// this program calculate the sum of array element with the help of pointer
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int sum = 0, *ptr;
    for(ptr = &arr[0]; ptr <= &arr[5]; ptr++){
        sum += *ptr;
    }
    printf("sum is array element is: %d ", sum);
    return 0;
}