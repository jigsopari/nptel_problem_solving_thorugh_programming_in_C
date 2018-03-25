#include <stdio.h>

int main()
{
   int array[10], n=10, i, j, index, swap;

   /* Read Array Elements */

   for ( i = 0 ; i < n ; i++ )
      scanf("%d", &array[i]);

for(i=0;i<(n-1);i++)
{
  index=i;
  for(j=i+1;j<n;j++)
  {
    if(array[j]<array[index])
    {
      index=j;
    }
  }
  
    if(index != i)
    {
      
      swap=array[i];
      array[i]=array[index];
      array[index]=swap;
    }
}
 printf("The sorted output in ascending order:\n");

   for ( i = 0 ; i < n ; i++ )
      printf("%d\n", array[i]);

   return 0;
}
	
