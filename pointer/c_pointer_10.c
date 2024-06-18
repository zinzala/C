// if two pointer pointing to different array element and we perform arithmetic between them then it leads to undifined behaviour
#include<stdio.h>
int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {6,5,4,3,2,1};
    int *ptr1 = &arr1[0];
    int *ptr2 = &arr2[2];
    printf("subtraction is: %d ", ptr2 - ptr1);
    return 0;
}