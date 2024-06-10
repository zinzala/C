// this program return sum of 2(two) digit no matter numbers are negative or positive. 
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 2(two) numbers: ");
    scanf("%d %d", &num1,&num2);
    
    if(num2 > 0){
        while (num2 != 0)
        {
            num1++;
            num2--;
        }
        
    }else if (num2 < 0)
    {
        while (num2 != 0)
        {
            num1--;
            num2++;
        }
        
    }
    
    printf("sum of %d and %d is: %d",num1,num2,num1);
    return 0;
}