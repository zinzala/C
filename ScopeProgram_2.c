// as you see in the program we can not declare or define variable with same name within block or region
// this program generate error like redefinition of 'var1'

#include<stdio.h>
int main(){
    int var1 = 3;
    int var1 = 4;
    printf("%d\n", var1);
    //printf("%d", var1);
    return 0;
}