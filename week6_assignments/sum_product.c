//find sum and product of elements of array
#include<stdio.h>
void main()
{
int arr[100];
int i,n;
int sum=0;
long int product=1;
printf("enter no. of elements in array \n");
scanf("%d", &n);
for(i=-0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
product=product*arr[i];
}
printf("sum is %d \n",sum);
printf("product is %ld \n",product);
}
