// this is a qustion program output amazed you try it on your own
// hint - do not forget concept of short cirkit
#include<stdio.h>
int main(){
    int var1 = 1;
    int var2 = 1;
    int var3 = ++var1 || var2++ ;
    int var4 = var2-- && --var1 ;
    printf("%d %d %d %d", var4, var3, var2,var1);
    return 0;
}