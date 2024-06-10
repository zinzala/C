// this program demonstrate how do while loop work
#include<stdio.h>
int main(){
    int var;
    do{
        printf("enter number: ");
        scanf("%d",&var);
    }while (var != 0);
    return 0;
}