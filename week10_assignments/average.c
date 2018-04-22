//find average
#include<stdio.h>
int findavg(int marks[]);
int findavg(int marks[])
{
  int sum=0,i;
  for(i=0;i<5;i++)
  {
    sum=sum+marks[i];
  }
  return sum/5;
}
int main()
{
    int avg; int marks[10];int i;int n=5;
    /* Read Marks*/
    for (i=0; i<n; i++)
        scanf("%d",&marks[i]);
    avg = findavg(marks);
    printf("Average=%d", avg);
    return 0;
}
