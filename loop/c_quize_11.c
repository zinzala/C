// floyd's triangle
#include<stdio.h>
int main(){
    int num;
    int n = 1;
    printf("Enter number: ");
    scanf("%d",&num);

    for(int r = 1; r <= num; r++){
        for(int c = 1; c <= r; c++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}