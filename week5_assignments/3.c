#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter a no.\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i == 0)
c++;
}
if(c==2)
printf("Prime\n");
else
printf("not prime");
return 0;
}

