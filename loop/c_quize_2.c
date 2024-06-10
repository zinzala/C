// this is a quize program
#include<stdio.h>
int main(){
    int var;
    for(var = 0; var < 20; var++){
        switch (var)
        {
        case 0: var += 5;
        case 1: var += 2;
        case 5: var += 5;
        default: var += 4;
        }
        printf("%d ",var);
    }
    return 0;
}