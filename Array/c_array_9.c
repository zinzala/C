// storing user input in 3D array. (2X3(matrix))  
#include<stdio.h>
int main(){
    int arr[2][2][3];
    printf("enter the element of 3D array\n");
    
    for(int m = 0; m < 2; m++){
        for(int r = 0; r < 2; r++){
            for(int c = 0; c < 3; c++){
                scanf("%d", &arr[m][r][c]);
            }
        }
    }
    
    printf("element of 3D array is \n");

    for(int m = 0; m < 2; m++){
        for(int r = 0; r < 2; r++){
            for(int c = 0; c < 3; c++){
                printf("%d ", arr[m][r][c]);
            }
            printf("\n");
        }
    }
    return 0;
}