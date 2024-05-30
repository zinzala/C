// in this program i print the size of float, double and long double 
// float give correct answer upto 7 place
// double give correct answer upto 16 place 
#include<stdio.h>
int main(){
    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    printf("%.16f\n",var1);
    printf("%.16f\n",var2);
    return 0;
}