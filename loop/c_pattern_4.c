// right triangle
#include<stdio.h>
int main(){
    int num,r,c;
    printf("enter number\n");
    scanf("%d",&num);

    for(r = 1; r <= num; r++){
        for(c = 1; c <= num; c++){
            if(c <= num && c >= num - (r - 1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}