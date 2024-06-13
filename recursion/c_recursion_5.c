// this program print number from 1 to 10 in such a way that when number is odd, add 1 and when number is even, subtract 1
#include<stdio.h>
void odd();
void even();

int num = 1;

int main(){
    odd();
    return 0;
}

void odd(){
    if(num <= 10){
        printf("%d ",num+1);
        num++;
        even();
    }
    return;
}

void even(){
    if(num <= 10){
        printf("%d ",num-1);
        num++;
        odd();
    }
    return;
}