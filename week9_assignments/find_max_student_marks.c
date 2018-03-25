#include <stdio.h>
#include <string.h>
typedef char st[10];
int main ()
      {
        st studname[10];
        int marks[10];
        int i; int n=5; int imaxpos=1;

int max;
for(i=0;i<n;i++)
{
  scanf("%s",studname[i]);
}


for(i=0;i<n;i++)
  scanf("%d",&marks[i]);


max=marks[0];
for(i=0;i<n;i++)
{
 if(marks[i]>max)
 {
   max=marks[i];
   imaxpos=i+1;
 }
}
printf ("The largest marks=%d\nObtained by student-%d %s\n", marks[imaxpos] , imaxpos, studname[imaxpos]);
          return(0);
}
