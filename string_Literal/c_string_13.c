// output of this program is undefined behaviour because null_character is not encounter
#include<stdio.h>
#include<string.h>
int main(){
    char arr1[6] = "hello";
    char arr2[4];
    strncpy(arr2,arr1, sizeof(arr2));
    printf("%s",arr2);
    return 0;
}