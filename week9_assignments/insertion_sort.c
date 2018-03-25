#include <stdio.h>

int main()
{
  int n=10, array[10], i, j, t;

  /* Read Array Elements*/

  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
for(i=0;i<=n-1;i++)
{
  j=i;
  while(j>0 && array[j-1]>array[j])
  {
    t=array[j];
    array[j]=array[j-1];
    array[j-1]=t;
    
    j--;
  }
}
printf("The sorted output in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
