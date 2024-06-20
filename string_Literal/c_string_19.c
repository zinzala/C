// this program demonstrate how we can store string in 2D array
#include<stdio.h>
int main(){
    char name[][10] = {"harshad","raj","nayan","kajal"};  // 4 row and each row can contain 10 character
    for(int i = 0; i<4; i++){
        printf("%s ",name[i]);
        printf("\n");
    }
    return 0;
}
