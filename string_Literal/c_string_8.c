// "%ns" <-- here n indicates the number of character allowed to store into a character array
#include<stdio.h>
int main(){
    char arr[10];
    printf("Enter the string\n");
    scanf("%9s",arr);   // allowed to store only 9 character
    printf("%s",arr);
    return 0;
}