//replace even by 0 and odd by 1
#include<stdio.h>
int main()
{
int arr[10];
int i;
printf("enter array \n");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
if(arr[i]%2 == 0)
 arr[i]=0;
else
 arr[i]=1;
}
printf("array after replacement \n");

for(i=0;i<10;i++)
{
printf("%d",arr[i]);
}
return 0;
}
