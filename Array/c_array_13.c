// this program demonstrate variable_lenth_array 
#include<stdio.h>
int main(){
    int len;
    printf("enter the total number of element you want to reverce: ");
    scanf("%d",&len);
    int arr[len];  // this is called variable length array
  
    printf("enter the %d element",len);
    for(int i = 0; i < len; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = len -1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}