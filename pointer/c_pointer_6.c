// finding the smallest and largest element of array with the help of pointers
#include <stdio.h>
void minMax(int arr[], int len, int *min, int *max)
{

   *min = *max = arr[0];

   for (int i = 1; i < len; i++)
   {

      if (arr[i] < *min)
      {
         *min = arr[i];
      }
      else if (arr[i] > *max)
      {
         *max = arr[i];
      }
   }
}
int main()
{
   int arr[] = {11, 45, 23, 56, 62, 35};
   int min, max;
   int len = sizeof(arr) / sizeof(arr[0]);
   minMax(arr, len, &min, &max);
   printf("the smallest element of array is: %d \n", min);
   printf("the largest element of array is: %d \n", max);
}