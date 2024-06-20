// this program demonstrate how strcat() function work
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    strcpy(str1,"zinzala ");
    strcpy(str2,"harshad");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}