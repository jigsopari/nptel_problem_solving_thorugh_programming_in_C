//Complete the code which reads a square matrix a[n][n] and print only the elements that falls in the diagonal starting from a[0][0] to a[n][n] and all other elements printed as 0 (zero).

#include<stdio.h>
int main()
{
	int n, i, j;
	int a[10][10];
	scanf("%d", &n); /*Number of Rows = Column = n */
	/* Get the input matrix from the test case */
	for (i=0; i<n; ++i)
		{
		for (j=0;j<n; ++j)
		scanf("%d",&a[i][j]);
		}
for (i=0; i<n; ++i)
		{
		  for (j=0;j<n; ++j)
			{
			if(i!=j)
			a[i][j]=0;
			}
		}
/* printing the matrix in matrix format*/

	for (i=0; i<n; ++i)
		{
		for (j=0;j<n; ++j)
		printf("%d\t",a[i][j]); /* print the row elements with one tab space */
		printf("\n");
		}

}
