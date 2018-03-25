#include<stdio.h>
int main()
{
int swap,i,j,array[10];
printf("enter the unsorted array \n");
for(i=0;i<10;i++)
{
scanf("%d ",&array[i]);
}
for(i=0;i<10;i++)
{
for(j=0;j<10-i-1;j++)
{
if(array[j]>array[j+1])
{
swap=array[j];
array[j]=array[j+1];
array[j+1]=swap;
}
}
}
printf(" the sorted array \n");
for(i=0;i<10;i++)
{
printf("%d ",array[i]);
}
return 0;
}

