// this program demonstrate how callBYreference work

#include<stdio.h>
void fun(int *pointer_var1 , int *pointer_var2);
int main(){
    int var1 = 1;
    int var2 = 2;
    fun(&var1,&var2);  // pass the address of variables usgin &(adress of)
    printf("var1 is %d\n",var1);
    printf("var2 is %d",var2);
    return 0;
}

void fun (int *pointer_var1 , int *pointer_var2){  // to hold address we required special vriable called as pointer *(de reference)
    *pointer_var1 = 2; // putting * in fromt of variable allow us to access value of that particular address 
    *pointer_var2 = 1; // if we do not put (*)star it simply means address not value
}