// how static modifire work
#include<stdio.h>
#include<stdlib.h>
int increment();
//extern int count;
int main(){
    int var1;
    var1 = increment();
    var1 = increment();
    var1 = increment();
 // count = count + 3;
 // printf("%d",count);
   printf("%d",var1);
    return 0;
}