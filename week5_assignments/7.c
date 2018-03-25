#include<stdio.h>
int main()
{
int temp,d,num,sum=0;
printf("eneter no.");
scanf("%d",&num);

temp=num;
while(num > 0)
{
d=num%10;
sum=sum+d;
num=num/10;
}
printf("sum is %d \n",sum);
return 0;
}
