// in this program we access the union member with the help of pointer and arrow(->) operator
#include<stdio.h>
union abc{
    int num;
    char ch;
};
int main(){
    union abc var;
    var.num = 90;
    union abc *p = &var;
    printf("%d %c",p->num,p->ch);
    return 0;
}