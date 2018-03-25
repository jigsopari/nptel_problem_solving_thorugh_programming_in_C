#include<stdio.h>
void f()
{
static int i = 3;
printf("%d",i);
if(--i) f();
}
main()
{
f();
}
