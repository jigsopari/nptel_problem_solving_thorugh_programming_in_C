//Complete the C code to count the number of negative elements in a 2D matrix.

#include<stdio.h>
int main()
{
	int row, col, i, j, count=0;
	int a[10][10];
	scanf("%d %d", &row, &col); /* Get no. of row & col from test case */
	/* Get the imputs matrix from the test case */
	for (i=0; i<row; ++i)
		{
		for (j=0;j<col; ++j)
		scanf("%d",&a[i][j]);
		}
/* Write the remaining code */

for(i=0;i<row;i++)
{
  for(j=0;j<col;j++)
  {
    if(a[i][j] <= 0)
    {
      count++;
    }
  }
}
	printf("No. of Negative Elements = %d",count);
}
