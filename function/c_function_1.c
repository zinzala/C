// this program calculate the area of rectengle
// as you see we define function once and use 2(two) times to calculate area of rectangle 
#include<stdio.h>
int calculateAreaofRectengle(int length, int bridth){
     int area;
     area = length * bridth;
     return area;
}

int main(){
    int length = 5;
    int bridth = 10;
    int area = calculateAreaofRectengle(length,bridth);
    printf("area of rectengle is %d\n", area);

   length = 50; bridth = 10;
   area = calculateAreaofRectengle(length,bridth);
   printf("area of rectengle is %d", area);

    return 0;
}