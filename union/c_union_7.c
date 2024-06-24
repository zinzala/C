// this program demonstrate how we can creat array of mixed type with the help of union 
// we can also create array of mixed type with the help of structure but then memory wastage come into picture
#include<stdio.h>
typedef union{
    int number;
    char *string;
    
}data;
int main(){
    data arr[10];
    arr[0].number = 101;
    arr[1].string = "harshad";
    arr[2].number = 102;
    arr[3].string = "jay";

    printf("%s\n",arr[1].string);
    printf("%d",arr[2].number);
    
   
    
    return 0;
}