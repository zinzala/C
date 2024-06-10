// palindrome program
#include<stdio.h>
int main(){
    int var1,reminder = 0,result = 0;
    printf("enter number: ");
    scanf("%d",&var1);
    
    int temp = var1;

    while(temp != 0){
        reminder = temp%10;
        result = result*10 + reminder;
        temp  = temp/10;
    }

    if(result == var1){
        printf("YES !, this is a palindrome number");
    }else{
        printf("NO !, this is not a palindrome number");
    }
    return 0;
}