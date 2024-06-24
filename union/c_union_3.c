// size of the union is taken accordig to the largest member of union therfor size of the union abc is 8.
#include<stdio.h>
union abc{
   int var1;  // 4 byte
   char ch1;  // 1 byte
   double var3; // 8 byte
   float var2;  // 4 byte
};
int main(){
    printf("%ld",sizeof(union abc));  // 8 byte
    return 0;
}