// multiple declaration is allowd but multiple definition is not allowd
// this program represents how extern modifire work
#include<stdio.h>
extern int var1 = 23;
int main(){
    printf("%d",var1);
    return 0;
}