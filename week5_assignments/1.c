//To print sum of series : 1+11+111+1111+ ...n terms
#include<stdio.h>
#include<math.h>
int main()
{
int n,i,t=1,s=0;
printf("enter the no. of iterations\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+t;
t=(t*10)+1;
}
printf("sum is : %d \n",s);
return 0;
}
