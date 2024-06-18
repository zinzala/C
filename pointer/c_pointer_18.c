// we can use array name as  pointer 
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int sum = 0;
    int *ptr;
    for(ptr = arr; ptr <= arr+5; ptr++){
        sum += *ptr;
    }
    printf("sum is: %d", sum);
    return 0;
}