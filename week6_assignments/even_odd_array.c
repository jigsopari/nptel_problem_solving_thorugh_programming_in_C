//divide into even and odd array.
#include <stdio.h>

int main() 
{
int j,i, array[5];
for(j=0;j<5;++j)
scanf("%d",&array[j]); /*storing the elements of array from test case */

int even[5], odd[5];
int e = 0 , d = 0; /* e and d is for counting number of even or odd) */  

   for(i = 0; i< 5; i++) {
      if(array[i]%2 == 0) {
         even[e] = array[i];
         e++;
      }
      else {
         odd[d] = array[i];
         d++;
      }
   }
      
   printf("Even array: ");
   for(i= 0; i< e; i++)
      printf("%d  ", even[i]);
	    
printf("\n");
  printf("Odd array: ");
   for(i= 0; i< d; i++)
      printf("%d  ", odd[i]);   
   
}
