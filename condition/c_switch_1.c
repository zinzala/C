// this program demonstrate how switch is used in c programing
#include<stdio.h>
int main(){
    int var1;
    printf("enter Day number\n");
    scanf("%d",&var1);

   switch(var1){
    case 1: printf("monday"); break;
    case 2: printf("tuesday"); break;
    case 3: printf("wensday"); break;
    case 4: printf("thursday"); break;
    case 5: printf("friday"); break;
    case 6: printf("saturday"); break;
    case 7: printf("sunday"); break;
    default: printf("Invalid day"); break;
   }
   

}