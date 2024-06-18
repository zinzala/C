// with the help of pointer we access the element of 2 dimensional array
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    printf("%d ",*(*arr));                  //*(*arr) <-- accessing the first element of first 1 dimensional array
    printf("%d ",*((*arr)+1));              // *((*arr)+1) <-- access the second element of first 1 dimensional array 
    printf("%d ",*(*(arr+1)));              // *(*(arr+1)) <-- accessing the first element of second 1 dimensional array
    printf("%d ",*(*(arr+1)+1));            // *(*(arr+1)+1) <-- accessing the second element of second 1 dimensional array
    return 0;
}