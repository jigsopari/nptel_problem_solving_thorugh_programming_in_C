#include<stdio.h>
#include<string.h>
typedef char st[10];
int main()
{
st studname[10];
int i,n=5;
for(i=0;i<n;i++)
{
scanf("%s ",studname[i]);
}

printf("stydent array is \n");
for(i = 0;i<n ;i++)
{
printf("%s \n",studname[i]);
}
return 0;
}

