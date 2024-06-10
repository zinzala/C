// in this program i am adding 2(two) numbers without using + operator
#include<stdio.h>
int main(){
    int var1,var2;
    printf("Enter values: ");
    scanf("%d %d",&var1,&var2);

    while (var2 != 0)
    {
        var1++;
        var2--;
    }

    printf("sum of 2(two) digits without using + operator is: %d",var1);
    
    return 0;
}