#include<stdio.h>
void displayarray(int arr[3][3]);
void displayarray(int arr[3][3])
{
  int i,j;
  printf("The complete array is\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}
int main()
{
    int arr[3][3], i, j;
    /* Read 9 elements */    
    
for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
   /* passing the array as argument */
         displayarray(arr);
             return 0;
}
