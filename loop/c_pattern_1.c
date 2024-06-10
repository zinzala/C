// left triangle
#include<stdio.h>
int main(){
    int r,c,num;
    
    printf("enter number\n");
    scanf("%d",&num);
    
    for(r = 1; r <= num; r++){
        for(c = 1; c <= r; c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}