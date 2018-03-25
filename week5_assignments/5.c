#include<stdio.h>
int hcf(int a, int b)
{
if(a==b)
return a;
if (a>b)
return hcf(a-b,b);
if(b>a)
return hcf(a,b-a);
}
int main()
{
int a,b,lcm=0,h=0;
printf("enter two numbers");
scanf("%d %d",&a,&b);

h=hcf(a,b);
lcm = (a*b)/h;
printf("lcm is : %d \n",lcm);
}

