// this is a quize program
#include<stdio.h>
void foo(char *c_ptr){
    if(*c_ptr && *c_ptr != ' '){
        foo(c_ptr+1);
        putchar(*c_ptr);   // DCBA
    }
}
int main(){
    char *ptr = "ABCD EFGH";
    foo(ptr);
    return 0;
}