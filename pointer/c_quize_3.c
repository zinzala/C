#include<stdio.h>
int main(){
    
      int len,min,max;    
      printf("Enter the length of an array:\n");
      scanf("%d", &len);

      int arr[len];
      
      printf("Enter the element of array in order to find the smallest element and largest element of array:\n");
      for(int i = 0; i < len; i++){
        scanf("%d",&arr[i]);
      }

      min = max = arr[0];

      for(int i = 1; i < len; i++){
        if(arr[i] < min){
            min = arr[i];
        }else if (arr[i] > max){
            max = arr[i];
        }
    }

     printf("the smallest element of array is: %d ", min);
     printf("\n");
     printf("the largest element of array is: %d ", max);


    return 0;
}