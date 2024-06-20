// this is a quize program
#include<stdio.h>
#include<string.h>
int main(){
    char *fruits[] = {"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};
    if(strcmp(fruits[1],fruits[2]) < 0){
        printf("%s is less than %s",fruits[1],fruits[2]);
    }else{
        printf("%s is greter than %s",fruits[1],fruits[2]);
    }
    return 0;
}