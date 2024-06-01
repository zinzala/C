// we can write multiple lines using black slash(\)
 
#include<stdio.h>
#define greter(x,y) if(x>y)\
                       printf("%d is greter than %d",x,y);\
                    else\
                       printf("%d is smaller than %d",x,y);
int main(){
    greter(8,5);
    return 0;
}