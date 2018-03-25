#include<stdio.h>
int main()
{
int n1,n2,x,y,lcm=0;
printf("enter two no.s \n");
scanf("%d %d",&n1,&n2);
x=n1,y=n2;
while(x!=y)
{
if(x>y)
x=x-y;
else 
y=y-x;
}
lcm=n1*n2/x;
printf("lcm = %d ",lcm);
}
