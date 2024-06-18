// pointer pointing to the whole one dimensional array
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int (*ptr)[5] = &arr;  // &arr indicate address of whole one dimensional array.
    printf("%d", **ptr);  // 1
    return 0;
}