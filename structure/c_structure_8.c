// this program demonstrate how array of structure work
#include<stdio.h>
struct car
{
    int seating_cap;
    int fuel_tank_cap;
    float average;

};

int main(){
    struct car var[2];
    for(int i=0; i<2; i++){
        printf("Enter car %d seating capacity\n",i+1);
        scanf("%d",&var[i].seating_cap);
        printf("Enter car %d fuel tank capacity\n",i+1);
        scanf("%d",&var[i].fuel_tank_cap);
        printf("Enter car %d average\n",i+1);
        scanf("%f",&var[i].average);
    }

    printf("\n");

    for(int i = 0; i<2; i++){
        printf("car %d detail\n",i+1);
        printf("seating capacity: %d\n",var[i].seating_cap);
        printf("fuel tank capacity: %d\n",var[i].fuel_tank_cap);
        printf("average: %f\n",var[i].average);
    } 
    return 0;
}