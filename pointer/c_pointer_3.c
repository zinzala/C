//  pointer is uninitialized
//  we applied the dereference_operator(*) and not only applying the dereference_operator(*) also we are trying to assign the 
//  value to the object which is pointed by the pointer.
//  but pointer not pointing to any location.
//  it is important to initialize the pointer before accessing the content of object pointed by the pointer.
//  it will produce the ' segmentation Faut ' error.

#include<stdio.h>
int main(){
    
    int *ptr;
    *ptr = 4;
    
    return 0;
}