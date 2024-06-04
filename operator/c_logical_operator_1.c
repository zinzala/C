// this program demonstrate how logical &&(AND) and ||(OR) operator is used

#include<stdio.h>
int main(){
    int var1 = 5;
    if(var1 == 5 && var1 <= 6 && var1 != 4 && var1 >= 3){  // all conditions are true thats why return true 
        printf("welcome , to learn operators\n");
    }else{
        printf("all conditions are not true\n");
    }

    int var2 = 10;
    if(var2 == 11 || var2 != 10 || var2 > 13 || var2 < 9 || var2 == 10){  // only one condition is true despite return true because of ||(OR) operator
        printf("YES, var2 is equal to 10\n");
    }else{
        printf("all condions are false");
    }
    return 0;
}