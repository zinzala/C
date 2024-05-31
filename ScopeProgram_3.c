// as you see in this program i defined the 2 variable with same name within the same block
// but the difference is that there is another block inside main block
// if we want to declare and define 2 variable with same name but in different block then it is possible thats why there is no error in this program

#include<stdio.h>
int main(){
    int var1 = 3;
    
    {
        int var1 = 4;
        printf("%d\n",var1);
    
    }
    printf("%d",var1);
    return 0;
}