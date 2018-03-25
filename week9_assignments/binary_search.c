#include<stdio.h>
int main()
{
int array[10],search,first,middle,last,i,n=10;
printf("enter the array \n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf("enter the number to be searched \n");
scanf("%d",&search);

first=0;
last=n-1;
middle=(first+last)/2;

while(first<=last)
{
if(array[middle]<search)
{
first=middle+1;
}
else if(array[middle] == search)
{
printf("%d is found at position %d \n",search,middle+1);
break;
}
else
last=middle-1;

middle=(first+last)/2;
}

if(first>last)
printf("%d is not found in the array \n",search);

return 0;
}

