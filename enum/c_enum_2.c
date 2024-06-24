// two or more values can have same value
#include<stdio.h>
int main(){
    enum abc{
        x = 0,
        y = 0,
        z = 0
    };
    printf("%d %d %d",x,y,z);
    return 0;
}