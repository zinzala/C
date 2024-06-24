// we can assign values in any order. all unassigned names will get values as values of previous name +1
#include<stdio.h>
int main(){
    enum abc{
        a = 1,
        b = 2,
        c,       // assign values of previous name + 1 which is 2+1 = 3
        d = 24
    };
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}