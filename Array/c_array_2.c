// write a program to check weather digit is repeated in a number or not
#include<stdio.h>
int main(){
    int num;
    int seen[10] = {0};
    printf("enter number: ");
    scanf("%d",&num);

    while (num>0)
    {
        int reminder = num % 10;
        if(seen[reminder] == 1){
            break;
        }
        seen[reminder] = 1;
        num /= 10;
    }

    if(num > 0){
        printf("YES , digit is repeated");
    }else{
        printf("there is no repeated digit");
    }
    
    return 0;
}