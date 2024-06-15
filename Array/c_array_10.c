// this program demonstrate matrix multiplicaiton with user input
#include<stdio.h>
#define MAX 50
int main(){
    // array
    int A[MAX][MAX],B[MAX][MAX],result[MAX][MAX];
    
    // var
    int A_rows,A_column,B_rows,B_column;
    int sum = 0;
    printf("enter the rows and column of matrix A\n");
    scanf("%d %d",&A_rows,&A_column);

    printf("Enter the element of matrix A\n");
    for(int r = 0; r < A_rows; r++){
        for(int c = 0; c < A_column; c++){
            scanf("%d", &A[r][c]);
        }
    }

    printf("Enter the rows and column of matrix B\n");
    scanf("%d %d",&B_rows,&B_column);

    if(A_column != B_rows){
        printf("To multiply matrix number_of_column of 1 matrix is must equal to number_of_rows of 2 matrix");
    }else{
        
        printf("Enter the element of matrix B\n");
        for(int r = 0; r < B_rows; r++){
            for(int c = 0; c < B_column; c++){
                scanf("%d",&B[r][c]);
            }
        }
    }

    for(int r = 0; r < A_rows; r++){
        for(int c = 0; c < B_column; c++){
            for(int k = 0; k < B_rows; k++){
                sum += A[r][k] * B[k][c];
            }
            result[r][c] = sum;
            sum = 0;
        }
    }

    for(int r = 0; r < A_rows; r++){
        for(int c = 0; c < B_column; c++){
            printf("%d ", result[r][c]);
        }
        printf("\n");
    }
    return 0;
}