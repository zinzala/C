// this is a quize program
#include<stdio.h>
int f(int c_c, int *c_b, int **c_a){
    int y , z;
    **c_a += 1;
    z = **c_a;

    *c_b += 2;
    y = *c_b;

    c_c += 3;

    return c_c + y + z ;
}

int main(){
    int c,*b,**a;  // *b is a pointer variable | **a is a pointer to a pointer
    c = 4; b = &c; a = &b;
    printf("%d", f(c,b,a));
    return 0;
}