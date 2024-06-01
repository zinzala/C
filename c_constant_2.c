// we can also use macros as function  you see in the below program
// in the below program add(x+y) is called as macros and x+y is called as value


#include<stdio.h>
#define add(x,y) x+y
int main(){
    printf("%d",add(4,5));
    return 0;
}