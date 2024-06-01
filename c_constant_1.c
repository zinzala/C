// avoid semicolon at the and of #define PI 3.14159 also avoid = sign like #define PI = 3.14159. this will generate error
// preprocessor replace the name(macros) with value.
#include<stdio.h>
#define PI 3.14159
int main(){
    printf("%.5f", PI ); // output: 3.14159
    return 0;
}