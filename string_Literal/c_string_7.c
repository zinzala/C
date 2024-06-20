// this program read string  using gets() function
#include<stdio.h>
int main(){
    char arr[10];
    printf("Enter string\n");
    gets(arr);  // if the length of the input is larger than lenght of the character array then our program may crash
    printf("output is: %s",arr);
    return 0;
}