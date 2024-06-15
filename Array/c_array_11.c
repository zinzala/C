//this program demonstrate matrix multiplication 
#include<stdio.h>
#define MAX 20
int main(){
    int sum = 0;
    int result[MAX][MAX];
    int A[2][3] = {
                   {1,2,3},
                   {4,5,6}
                   //{7,8,9}
                  };

    int B[3][2] = {
                //    {1,2,3},
                //    {4,5,6},
                //    {7,8,9}

                    {1,2},
                    {3,4},
                    {5,6}
                  };

    for(int r = 0; r < 2; r++){
        for(int c = 0; c < 2; c++){
          for(int k = 0; k < 3; k++){
            sum = sum + A[r][k] * B[k][c];
          }
          result[r][c] = sum;
          sum = 0;
        }
    }

    for(int r = 0; r < 2; r++){
        for(int c = 0; c < 2; c++){
            printf("%d ", result[r][c]);
        }
        printf("\n");
    }
    return 0;
}