// this is a quize program
#include<stdio.h>
int function(){
    static int var = 16;
    return var--;
}

int main(){
    for(function(); function(); function()){
        printf("%d ",function());
    }
    return 0;
}