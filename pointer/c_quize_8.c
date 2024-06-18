// this is a quize program 
#include<stdio.h>
int fun(int *arr,int n){
    if(n<=0){
        return 0;
    }else if(*arr % 2 == 0){
         return *arr + fun(arr+1, n-1);
    }else{
        return *arr - fun(arr+1, n-1);
    }
}

int main(){
    int arr[] = {12,7,13,4,11,6};
    printf("%d", fun(arr,6));
    return 0;
}