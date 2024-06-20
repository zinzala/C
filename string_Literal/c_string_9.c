//designing our own input function
#include<stdio.h>
int input(char str[],int n){
    int ch,i=0;
    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int main(){
    char arr[100];
    printf("Enter String:\n");
    int n = input(arr,10);
    printf("%d %s",n,arr);
    return 0;
}