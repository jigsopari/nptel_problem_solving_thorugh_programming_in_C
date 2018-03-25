#include<stdio.h>
void n();
int main()
{

#define nptl(m, n) m/n+m
n();
return 0;
}
void n()
{
printf("%d\n",nptl(-3,3));
}
