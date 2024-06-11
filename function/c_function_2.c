// this program demonstrate how function works
#include<stdio.h>
char fun();  // function prototype

int main(){
    char c = fun();
    printf(" %c",c);
    return 0;
}

char fun(){
    return 'a';
}