// this is a quize program
#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    char *p = "string";
    int length = strlen(p);
    for(int i = 0; i < length; i++){
        arr[i] = p[length - i];
    }
    puts(arr);  // no output because first character is null character
    return 0;
}