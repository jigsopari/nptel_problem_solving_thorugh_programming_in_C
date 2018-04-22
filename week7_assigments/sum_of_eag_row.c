//Complete the C code which computes and prints the sum of each rows of a 2D Matrix
#include <stdio.h>
int main()
{
    int matrix[10][10];
    int i,j,r,c; /* r and c are no. of rows and columns respectively taken from test case */
    int sum[10]; /* Sum of each row is kept in this array */

    scanf("%d",&r); /* Input no. of rows */

    scanf("%d",&c); /* Input no. of columns */


for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }


    /*sum of all rows*/
    for(i=0;i<r;i++)
    {

    	sum[i]=0;
        for(j=0;j<c;j++)
        {
            sum[i] = sum[i] +  matrix[i][j];
        }
    }
for(i=0;i<r;i++)
	printf("%d\n",sum[i]);
}
