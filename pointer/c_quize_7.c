// this is a quize program
#include<stdio.h>
int main(){
    int arr[][3] = {1,2,3,4,5,6};
    int (*ptr)[3] = arr;
    printf("%d %d ", (*ptr)[1], (*ptr)[2]);   // (*ptr)[1] -->  *((*ptr)+1)
    ++ptr;
    printf("%d %d", (*ptr)[1],  (*ptr)[2]);
    return 0;
}