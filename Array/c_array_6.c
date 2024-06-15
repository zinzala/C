// write a program to calculate row_sum and column_sum of 5x5 matrix
#include<stdio.h>
int main(){
    int sum = 0;
    int arr[5][5] = {
                    {1,2,3,4,5},       // 15  // 47
                    {4,5,6,7,8},       // 30  //  52
                    {9,10,11,12,13},   // 55  //  57
                    {14,15,16,17,18},  // 80  //  62
                    {19,20,21,22,23}   // 105  // 67
                    };
    printf("Row sum: ");

    // row sum
    for(int r = 0; r<5; r++){
        for(int c = 0; c < 5; c++){
            sum += arr[r][c];
        }
        printf("%d ",sum);
        sum = 0;
    }

    printf("\ncolumn sum: ");

    // column sum
    for(int c = 0; c < 5; c++){
        for(int r = 0; r < 5; r++){
            sum += arr[r][c];
        }
        printf("%d ",sum);
        sum = 0;
    }
    return 0;
}