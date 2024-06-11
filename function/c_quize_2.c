// this is a quize program
#include<stdio.h>
void function1(int a, int b){
    int c;
    c = a; a = b; b = c;
}
void function2(int *a, int *b){
    int c;
    c = *a; *a = *b; *b = c;
}
int main(){
    int a = 4, b = 5, c = 6;
    function1(a,b);
    function2(&b,&c);
    printf("%d",c-a-b);
    return 0;
}