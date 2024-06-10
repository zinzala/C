// this program demonstrate how break keyword work
#include<stdio.h>
int main(){
    int var;
    printf("enter integer number: ");
    scanf("%d",&var);

    while(var != 0 ){
        if(var < 0)
            break;
        printf("enter integer number");
        scanf("%d",&var);
    }
    return 0;
}