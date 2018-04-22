#include<stdio.h>
void main( )
{
   int a[20],n=10,item,i;
   
   for(i=0; i<n; i++)
     {
            scanf("%d", &a[i]);
     }
     
     scanf("%d", &item);
i=n-1;
while(item<a[i] && i>=0)
{
  a[i+1]=a[i];
  i--;
}
a[i+1]=item;
n++;
printf("ITEM to be inserted:%d\n",item);
printf("After insertion array is:\n");
     for(i=0; i<n; i++)
     {
              printf("%d\n",a[i]);
     }
}
