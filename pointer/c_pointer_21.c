#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = arr;
    printf("%d", *(++ptr));
    return 0;
}