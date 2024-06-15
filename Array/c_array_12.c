// if we put const keyword in front of array then we can not modify that array
// if we try to modify the array then error occurred as follows: --> assignment of read-only location arr[2]
// if our array contain valueble information and we don't won't that program change the information then const keyword is come into picture.
// also by putting const keyword in front of array we tell the compiler that we don't won't to modify the array
#include<stdio.h>
int main(){
     const int arr[] = {1,2,3,4,5,6,8,8,9};
  // arr[2] = 10;
     return 0;
}