// this program generate error because add function is static function in another file
#include<stdio.h>
int add(int,int);
int main(){
    int num1 = 5;
    int num2 = 5;
    int sum = add(num1,num2);
    printf("%d ", sum);
    return 0;
}