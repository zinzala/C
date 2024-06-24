// this program demonstrate how enum works
// if we do not assign values to enum name then compiler will automatically assign the value starting from 0(zero).
#include<stdio.h>
enum bool{
    false,   // false will get value 0
    true     // true will get value 1
};
int main(){
    enum bool var;  // this variable take value either true or false
    var = true;
    printf("%d",var);    // 1
    return 0;
}