// this progtam count digit 
#include<stdio.h>
int main(){
    int var1 = 1234567; // output is six(7)
    int count = 0;

    while(var1 != 0){
        var1 = var1 / 10;
        count++;
    }
    printf("%d",count);
    
    return 0;
}