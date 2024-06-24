// in case of struct address of member if different
// but union share same memory location there for in case of union output is same memory location
#include<stdio.h>
struct abc{
    int a;
    int b;
}var1;

int main(){
    printf("%p\n",&var1.a);  //00407070
    printf("%p",&var1.b);    //00407074
 }