// pre/post decrement
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = &arr[2];
    printf("%d ", *(--ptr));  // pre decrement move 1 position in backword direction first
    printf("%d ", *(ptr--));  // post decrement mvoe 1 position in backword direction 
    return 0;
}