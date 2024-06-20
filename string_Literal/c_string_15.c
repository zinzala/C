// this program demonstrate how strlen() function is used and work
#include<stdio.h>
#include<string.h>
int main(){
    char *ptr = "hello world";
    printf("%d\n",strlen(ptr));   // strlen() function return the length of the array

    char arr1[] = "hello world";  
    printf("%d\n",strlen(arr1));

    char arr2[100] = "hello world";  // strlen() function return the length of the string not lenght of the array
    printf("%d",strlen(arr2));
    return 0;
}