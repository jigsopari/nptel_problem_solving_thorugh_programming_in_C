#include <stdio.h>

void main()
{
  int num[10];
  int  i, Number=10;
  int Mean, Sum=0;

  for(i=0; i<Number; i++)
   {
     scanf("%d", &num[i]);
   }
int j;
for(j=0;j<Number;j++)
{
  Sum=Sum+num[j];
}
Mean = Sum/Number;
 printf("%d",Mean);
}
