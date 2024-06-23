// this program demonstrate how typedef help us to create our own datatype
#include<stdio.h>
typedef struct emp
{
    char *name;
    int age;
}emp;

int main(){
     emp employee1,employee2;
     employee1.name = "harshad";
     employee1.age = 22;
     printf("employee1 name is %s\n",employee1.name);
     printf("employee1 age is %d",employee1.age);  
    return 0;
}