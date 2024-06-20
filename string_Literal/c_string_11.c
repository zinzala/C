// this program demonstrate the use of strcpy() function
#include<stdio.h>
#include<string.h>
int main(){
    
    char arr1[10] = "hello";
    char arr2[10];
    
    printf("%s\n", strcpy(arr2,arr1));
    printf("%s",arr2);
    
    return 0;
}