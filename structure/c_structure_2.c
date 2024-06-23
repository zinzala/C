// local structure and global structure
#include<stdio.h>
struct 
{

    char *name;
    int age;
    float salary;
}emp1,emp2;

float manager(){
    struct 
    {
        
        char *name;
        int age;
        float salary;
    }manager;
    
    manager.age = 27;
    
    if(manager.age <= 27){
        manager.salary = 55000.0;
    }else{
        manager.salary = 65000.0;
    }
    return manager.salary;
}
int main(){
    printf("Enter the employe1 salary\n");
    scanf("%f",&emp1.salary);
    printf("Enter the employe2 salary\n");
    scanf("%f",&emp2.salary);
    printf("Employe1 salary is: %.2f\n", emp1.salary);
    printf("Employe2 salary is: %.2f\n", emp2.salary);
    printf("Manager salary is: %.2f", manager());
    return 0;
}