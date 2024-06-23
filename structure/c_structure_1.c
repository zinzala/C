// this program demonstrate how we can create structure and access its member using .(dot) operator
#include<stdio.h>
struct
{
    int rollNo;
}student1,student2;

int main(){
    student1.rollNo = 1024;   // .(dot) operator is used to access member of structure
    student2.rollNo = 4207;
    printf("%d\n",student1.rollNo);
    printf("%d",student2.rollNo);    
    return 0;
}