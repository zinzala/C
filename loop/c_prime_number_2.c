// this program check weather entered number is prime number or not
#include<stdio.h>
#include<math.h>
int main(){
    
    int actualNUMBER,i;
    int flag = 0;
    printf("Enter NUMBER to check weather it is a prime number or not: ");
    scanf("%d",&actualNUMBER);    

    int squreroot = ceil(sqrt(actualNUMBER));  // store the squreroot of number
    int temp = actualNUMBER;

    for(i = 2; i <= squreroot; i++){          // run loop from 2 to squreroot of number
        if(temp % i == 0){                    // if number is divided increment the flag value
            flag = 1;
        }
    }
    if(flag == 0 && temp != 1 || temp == 2 || temp == 3){         
        printf("%d is a prime number",temp);
    }else{
        printf("%d is not a prime number",temp);
    }
    return 0;
}