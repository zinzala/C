// union members share same memory location there for changes in one reflected to the other  
#include<stdio.h>
union abc{
    int num;
    char ch;
}var;
int main(){
    var.num = 65;
    printf("num = %d\n",var.num);  // 65
    printf("ch = %c",var.ch);  // A   <-- ASCII code of A is 65
    return 0;
}