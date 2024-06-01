// as you see in the program vriable which we declare and difine as a constant using const keyword will not be change
// if we try to change constant variable value like reinitilize then error is occurred
 
#include<stdio.h>
int main(){
    const int var1 = 20;
   //var1 = 23; // generate error like assignment of read only variable because var1 is constant variable we use const keyword
    printf("%d",var1);
    return 0;
}