// this program demonstrate how logical !(NOT) operator is used
// return true if condition is false 
// return false if condition is true
#include<stdio.h>
int main(){
    int var1 = 10;

    if(!(var1 == 10)){
        printf("condition is false");
    }else{
        printf("condition is true");
    }
    return 0;
}