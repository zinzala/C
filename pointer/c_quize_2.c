#include<stdio.h>
int main(){
    
    int arr[] = {51,84,93,83,25,45};
    int min,max;
    min = max = arr[0];

    for(int i = 1; i < 6; i++){
        if(arr[i] < min){
            min = arr[i];
        }else if( arr[i] > max){
            max = arr[i];
        }
    }

    printf("the smallest element of array is: %d ", min);
    printf("\n");
    printf("the largest element of array is: %d ", max);
    return 0;
}