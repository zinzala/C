// armstrong number program
#include<stdio.h>
int main(){
    int number,flag = 0,reminder,mul = 1,result = 0;
    printf("enter number: ");
    scanf("%d",&number);
    int temp = number;
    while (temp != 0)
    {
        temp = temp / 10;
        flag++;
    }
    temp = number;
    int cnt = flag; 
    
    while (temp != 0){
        reminder = temp % 10;
        
        while (cnt != 0){      // calculating each digit 3 times with it self
            mul *= reminder;
            cnt--;
        }
      result = result + mul;
      cnt = flag;
      mul = 1;
      temp /= 10; 
     
    }

     if(result == number){
        printf("YES! number is armstrong number");
     }else{
        printf("NO !, number is not armstrong number");
     }
    
    
    
    return 0;
}