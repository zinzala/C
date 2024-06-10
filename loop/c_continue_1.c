// this program demonstrate how continue keyword work
#include<stdio.h>
int main(){
    int var, num = 2;
    for(var = 1; var <= 20; var++){
        if(var == num){
            num += 2;
            continue;
        }
        printf("%d ",var);
    }
    return 0;
}