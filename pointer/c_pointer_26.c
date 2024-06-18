#include<stdio.h>
int main(){
    int arr[2][2][2] = {
                        {{1,2},{3,4}},
                        {{5,6},{7,8}}
                       };

    printf("%d", *(*(*(arr+1)+1)));  // print the second last element of 3D array
    return 0;
}