#include<stdio.h>
void fun(int);
void main()
{
int x=2;
fun(x++);
}
void fun(int x)
{
printf ("x is %d \n",x++);
}

