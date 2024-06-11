// this is a quize program 
#include<stdio.h>
int func(int num){
    int count = 1;
    while(num)
    {
        count++;
        num >>= 1;
    }
    return(count);
}

int main(){
    int var1;
    printf("Enter number: ");
    scanf("%d",&var1);

    int count = func(var1);
    printf("%d",count);
    return 0;
}