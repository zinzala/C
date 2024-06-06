// this program demonstrate how switch work
#include<stdio.h>
int main(){
    char var1;
    printf("Enter your grade: ");
    scanf(" %c",&var1);

    switch(var1){
        case 'A':
           printf("Excellent");
           break;
        case 'B':
           printf("very good");
           break;
        case 'C':
           printf("good");
           break;
        case 'D':
           printf("Not bad");
           break;
        default:
            printf("Enter grade in uppercase");
            break;
    }
    return 0;
}