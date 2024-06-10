// this program print number in reverse order
#include<stdio.h>
int main(){
    int var1 = 1234;
    int temp = var1;
    int reminder;
    int result = 0;
    
    while (temp != 0)
    {
      reminder = temp % 10;
      result = result*10 + reminder;
      temp = temp / 10;    
    }
    
    printf("%d",result);
    return 0;
}