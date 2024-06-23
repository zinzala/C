// this program demonstrate structure packing
#include<stdio.h>
#pragma pack(1)       // because of #pragma pack(1) output of this program is 6 means there is no memory westage but cpu cycle is wested 
struct abc{
    char a;
    char b;
    int  c;
};
int main(){
    struct abc var;
    printf("%d",sizeof(var));
    return 0;
}