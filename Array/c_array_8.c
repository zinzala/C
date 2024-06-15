// storing user input in 2D array
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter the elemennt of 3x3 matrix \n");
    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            scanf("%d", &arr[r][c]);
        }
    }

    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}