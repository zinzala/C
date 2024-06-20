// this program prints the string literal at console with the help of printf() function ans %s format specifier
#include<stdio.h>
int main(){
    
    char *ptr = "hello world";
    printf("%s \n",ptr);  // print the whole string literal
    printf("%.5s\n",ptr);  // if we want to print up to some specific_number 
    printf("%7.5s",ptr);  // add the extra space in front of 5 character. in this case space is equal to 2
    
    return 0;
}