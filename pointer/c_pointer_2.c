// ptr variable is not initialize.
// pointer(ptr) must have to point to some location before applying the dereference_operator(*).
// here we are trying to access the content stored at the location which is pointed by the ptr(pointer_variable).
// but we do not initialize the ptr variable.
#include<stdio.h>
int main(){
    int *ptr;   // uninitialized pointer variable.
    printf("%d", *ptr);  // undefined behaviour
    return 0;
}