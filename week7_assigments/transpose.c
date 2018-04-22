//transpose of a matrix

#include <stdio.h>
int main()
{
int array1[10][10], array2[10][10];
int i,j,row,col;
/* Takes no. of rows from test case */
scanf("%d",&row); 
/* Takes no. of cols from test case */
scanf("%d",&col); 
 

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&array1[i][j]); 
        }
    }
for(i=0;i<col;i++)
{
  for(j=0;j<row;j++)
  {
    array2[i][j]=array1[j][i];
  }
}
for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",array2[i][j]); 
        }
printf("\n");
    }
}
