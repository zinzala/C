// we can use array name as pointer but we can not assign the new address
#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
  //  printf("%d", arr++); <-- this is not correct
    return 0;
}