#include<stdio.h>
int gcd(int a, int b)
{
int temp;
while((b%a) != 0)
{
temp=b%a;
b=a;
a=temp;
}
return a;
}
void main()
{
int p,q,hcf;
printf("enter two no.s \n");
scanf("%d %d",&p,&q);
hcf=gcd(p,q);
printf("hcf is %d\n",hcf);
}


