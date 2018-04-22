//reverse the same array
#include<stdio.h>
int main()
{
int arr[10];
int i,j,temp;
printf("enter array \n");
for(i=0;i<10;i++)
scanf("%d ",&arr[i]);

j=i-1;
i=0;
while(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
j--;
i++;
}


printf("reverse arrays is \n");
for(i=0;i<10;i++)
printf("%d ",arr[i]);

return 0;
}
