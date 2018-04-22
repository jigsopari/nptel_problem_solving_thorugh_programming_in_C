//add and subtract two arrays

#include<stdio.h>
int main()
{
int a[5],b[5],c[5],d[5];
int i;
printf("enter two arrays \n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
scanf("%d",&b[i]);
}
for(i=0;i<5;i++)
{
c[i]=a[i]+b[i];
d[i]=a[i]-b[i];
}
printf("Added array \n");
for(i=0;i<5;i++)
{
printf("%d ",c[i]);
}
printf("difference array \n ");
for(i=0;i<5;i++)
{
printf("%d ",d[i]);
}
return 0;
}
