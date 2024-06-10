// this program convert binary number into decimal number
#include<stdio.h>
int main(){
    int binary,reminder;
    int weight = 1;
    int decimal = 0;
    printf("Enter binary number: ");
    scanf("%d",&binary);
    int cbinary = binary;

    while(binary != 0){
       reminder = binary % 10;
       decimal = decimal + reminder*weight;  // rem * 1 and 2 and 4 and 8 and so on
       binary = binary / 10;
       weight = weight * 2;
    } 

    printf("the decimal of %d is %d",cbinary,decimal);

    return 0;
}