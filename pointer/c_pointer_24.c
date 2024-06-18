// in c array elements are stored in row_major order weather it is 1D or multidimensional array
// with the help of pointer and single for_loop, we can print the element of array
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};  // two dimensional array with 2_rows and 2_columns
    int *ptr;
    for(ptr = &arr[0][0]; ptr <= &arr[1][1]; ptr++){
        printf("%d ", *ptr);
    }
    return 0;
}