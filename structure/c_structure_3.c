// this program demonstrate how we can use structure tag
#include<stdio.h>
struct employee{
    char *name;
    int age;
    float salary;
};
float manager(){
    
    struct employee manager;
    manager.age = 27;
    
    if(manager.age > 27){
        manager.salary = 65000;
    }else{
        manager.salary = 35000;
    }
    return manager.salary;
}
int main(){
    struct employee emp1,emp2;
    printf("Enter employee1 salary:\n");
    scanf("%f",&emp1.salary);
    printf("Enter employee2 salary:\n");
    scanf("%f",&emp2.salary);
    printf("employee1 salary is: %.2f\n",emp1.salary);
    printf("employee2 salary is: %.2f\n",emp2.salary);
    printf("manager salary is:%.2f",manager());
    return 0;
}