// this is a quize program
#include<stdio.h>
int main(){
    int arr[] = {5,16,7,89,45,32,23,10};
    int *p = &arr[1], *q = &arr[5];

    printf("%d ", *(p+3));  // 45
    printf("%d ", *(q-3));  // 7
    printf("%d ", q-p);     // 4
    printf("%d ", p < q);   // 1
    printf("%d ", *p < *q);  // 1

    return 0;
}