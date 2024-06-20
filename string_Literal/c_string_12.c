// we can also chain to gather strcpy() function call as follows:
#include<stdio.h>
#include<string.h>
int main(){
    char arr1[10] = "hello";
    char arr2[10];
    char arr3[10];
    strcpy(arr3,strcpy(arr2,arr1));
    printf("%s %s",arr2,arr3);
    return 0;
}