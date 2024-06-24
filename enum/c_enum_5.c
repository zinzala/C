// all enum constant must be unique in their scope.
#include<stdio.h>
int main(){
    enum enum1{x=1,y=2,z=3};
    enum enum2{x=5,c=3,d=2}; // redeclaration of enumerator 'x' 
    return 0;
}