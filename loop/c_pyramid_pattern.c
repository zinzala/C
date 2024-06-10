// pyramid pattern
#include<stdio.h>
int main(){
    int var,r,c;
    printf("enter number");
    scanf("%d",&var);
    
    for(r=1; r<=var; r++){
        for(c=1; c<=2*var-1; c++){
            if(c >= var-(r-1) && c <= var+(r-1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}