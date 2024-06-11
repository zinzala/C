// this program demonstrate how function works
// recall in function_prototype it is not necessary to write parameter name
// in function definition parameter name is necessary
#include<stdio.h>
int add(int,int);

int main(){
    int num1 = 24;
    int num2 = 25;
    int sum = add(num1,num2);
    printf("sum is %d",sum);
    return 0;
}

int add(int var1, int var2){
    return (var1 + var2);
}