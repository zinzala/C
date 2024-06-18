// array name represents the base address of array
#include<stdio.h>
int main(){
    int arr[5];
    *arr = 15;    // *(arr) = 15  ==  *(1000) = 15
    printf("%d ",arr[0]);
    *(arr+1) = 20; // *(arr+1) = 20  ==  *(1000 + 1x4) = 20
    printf("%d ",arr[1]);
    
    return 0;
}