#include <stdio.h>

int main()
{
   int array[10], search, i, n=10;

  /* Read array */

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

  /* Read the interger to be searched */

      scanf("%d", &search);

int pos=0,flag=0;;

for(i=0;i<n;i++)
{
  if(array[i] == search)
  {
    flag=1;
    pos=i+1;
  }
}

if(flag == 1)
{
  printf("%d is found at position %d.",search,pos);
}
else
{
  printf("%d is not there in the array.",search);
    
}
return 0;
}

