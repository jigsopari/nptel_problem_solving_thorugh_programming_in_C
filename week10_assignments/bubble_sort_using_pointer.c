#include<stdio.h>
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
void bubble(int arr[], int size)
{
 int i,j,temp;
  for(i=size-1;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(&arr[j],&arr[j+1]);
      }
    }
  }
}
void main()
{
int arr[10];
int i;
int size=5;

/* Read Array Elements */

for(i=0;i<size;i++)
scanf("%d",&arr[i]);
 
bubble(arr,size);

printf("The sorted elements:\n");
for(i=0;i<size;i++)
 printf("%d\n",arr[i]);
}
