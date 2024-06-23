// this program demonstrate how designated initialization work
#include<stdio.h>
struct num{
    int var1;
    int var2;
    int var3;
};
int main(){
      struct num num1 = {.var3 = 30,.var2 = 20,.var1 = 10};   // designated initialization
      printf("%d %d %d",num1.var1,num1.var2,num1.var3);
    return 0;
}