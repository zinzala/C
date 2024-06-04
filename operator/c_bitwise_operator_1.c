// this program demonstrate difference between bitwise &(AND) operator and logical &&(AND) operator

#include<stdio.h>
int main(){
    char var1 = 1; // binary representation of 1 is = (0000 0001)
    char var2 = 2; // binary representation of 2 is = (0000 0010)
    if(var1&var2)
         printf("bitwise &(AND) operator"); // (0000 0001) + (0000 0010) = 0 = false
    if(var1 && var2)
         printf("logical &&(AND) operator");// true + ture = 1      
    return 0;
}