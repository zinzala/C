// this program differentiate sizes of structure and union
#include<stdio.h>
#pragma pack(1)
struct{
   double a;   // 8 byte
   union{
    char b[4];  // 4 byte
    double c;   // 8 byte
    int d;      // 4 byte
   }e;
   char f[4];   // 4 byte
}s;   // size of structure s is 20 byte
union{
   double a;   // 8 byte
   struct{
    char b[4];  // 4 byte
    double c;   // 8 byte
    int d;      // 4 byte
   }e;
   char f[4];   // 4 byte
}u;  // size of union u is 16 byte
int main(){
    printf(" %d %d ",sizeof(s),sizeof(u));
    return 0;
}