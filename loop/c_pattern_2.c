// left triangle (mirror)
#include<stdio.h>
int main(){
    int r,c,num;
    
    printf("enter number\n");
    scanf("%d",&num);
    
    for(r = num; r >= 1; r--){
        for(c = 1; c <= r; c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}