// this program check weather entered number is strong number or not
#include<stdio.h>
int main(){
    int num,reminder;
    int fact = 1; int result = 0;
    printf("Enter number: ");
    scanf("%d",&num);
    int temp = num;

    while(temp != 0){
          reminder = temp % 10;
          for(int i = 1; i <= reminder; i++){
               fact = fact * i;    // calculating the factorial of each digit
          }
          result = result + fact;
          fact = 1;
          temp = temp / 10;
    }
    if (result == num)
    {
        printf("%d is strong number", num);
    }else{
        printf("%d does not strong number", num);
    }
    

    return 0;
}