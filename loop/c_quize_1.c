// this is a quize question
#include<stdio.h>
int main(){
    int var = 1024;
    for(; var; var >>= 1){
        printf("hello world\n");
    }
    return 0;
}