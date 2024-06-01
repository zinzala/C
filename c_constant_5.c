// __DATE__ & __TIME__ are predifine macros that print current date and time

#include<stdio.h>
int main(){
    printf("date: %s\n", __DATE__);
    printf("time: %s",__TIME__);
    return 0;
}