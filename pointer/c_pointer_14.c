// comparision between two pointer that pointing to same array element
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr1 = &arr[3];
    int *ptr2 = &arr[5];
    printf("%d ", ptr1<=ptr2); // 1
    printf("%d ",ptr1>=ptr2); //0
    ptr2 = &arr[3];
    printf("%d ", ptr1==ptr2); //1
    return 0;
}