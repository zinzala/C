// this program calculate sum of array element
#include<stdio.h>
int main(){
    int sum = 0;
    int arr[] = {1,2,3,4,5,6}; // 21
    for(int i = 0; i < 6; i++){
        sum = sum + arr[i];
    }
    printf("sum of the array element is: %d ", sum);  
    return 0;
}