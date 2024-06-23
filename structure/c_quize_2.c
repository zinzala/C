// this is a quize program
#include<stdio.h>
struct Ournode{
    char x,y,z;
};
int main(){
    struct Ournode var = {'1','0','a'+2};
    struct Ournode *ptr = &var;
    printf("%c %c",*((char*)ptr+1),*((char*)ptr+2));    // we are performing the typecasting and dereferencing (char*)ptr <-- type cast pointer struct Ournode to char
}