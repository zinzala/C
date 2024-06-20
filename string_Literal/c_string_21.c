#include<stdio.h>
int main(){
    char *fruits[] = {"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};
    for(int i = 0; i < 4; i++){
        printf("%s",fruits[i]);
        printf("\n");
    }
    return 0;
}