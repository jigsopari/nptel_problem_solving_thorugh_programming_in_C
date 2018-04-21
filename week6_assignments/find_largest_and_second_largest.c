//Find the largest and second largest of an array.
#include <stdio.h>
int main() 
{
int j, array[5], largest, second;
for(j=0;j<5;++j)
scanf("%d",&array[j]); /*storing the elements of array from test case */
int i;

   if(array[0] > array[1]) 
   {
      largest = array[0];
      second  = array[1];
   }else 
   {
      largest = array[1];
      second  = array[0];
   }

   for(i = 2; i < 5; ++i) 
  {
      if( largest < array[i] ) 
      {
         second = largest;
         largest = array[i];
      }else if( second < array[i] ) 
      {
         second =  array[i];
      }
   }
 printf("Largest - %d, Second - %d", largest, second);   

}

