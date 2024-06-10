#include<stdio.h>
int main(){
    
    int number,reminder;
    int sum = 0;
    printf("enter number: ");
    scanf("%d",&number);

    for(int i = 1; i<number; i++){
        reminder = number%i;
        if(reminder == 0){
            sum = sum + i;
        }
    }

    if(sum == number){
        printf("%d is a perfact number", number);
    }else{
        printf("%d doesn't perfact number",number);
    }
    return 0;
}