// this is a quize program
#include<stdio.h>
int main(){
    char arr[] = "GATE2024";
    char *ptr = arr;
    printf("%s", ptr + ptr[3] - ptr[1]);   // 1000 + E(69) + A(65) = 1004
    return 0;
}