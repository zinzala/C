// this program demonstrate callBYvalue
#include<stdio.h>
void fun(int,int);
int main(){
    int var1 = 1;
    int var2 = 2;
    fun(var1,var2);
    printf("var1 is %d\n",var1);
    printf("var2 is %d",var2);
    return 0;
}

void fun(int var1, int var2){
    var1 = 2;
    var2 = 1;
}