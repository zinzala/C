// this program demonstrate initialization and how to access structure member
#include<stdio.h>
struct student{
    int rollNo;
    char *name;
    int age;
    float marks;
};
int main(){
    
    struct student harshad = {101,"harshad",22,70.65};
    printf("Age of the harshad is: %d",harshad.age);  // with the help of .(dot) operator we can access the member of operator
    return 0;
}