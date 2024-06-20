// store user_input in array and print it
#include<stdio.h>
int main(){
    char name[5][10];
    printf("Enter the name\n");
    for(int i = 0; i < 5; i++){
        scanf("%s",name[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%s",name[i]);
        printf("\n");
    }

    return 0;
}