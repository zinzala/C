// this program demonstrate what is the importance of null_character(\0)
#include<stdio.h>
int main(){
    char  A[6] = "hello";   
    char B[6];
    int i;
    for(i = 0; A[i] != '\0'; i++){   
        B[i] = A[i];
    }
    B[i] = '\0';
    printf("%s",B);   
    return 0;
}