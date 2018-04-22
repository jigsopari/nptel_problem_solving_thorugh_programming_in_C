//Complete the C code to find the difference between two matrices of any order and  print the result in matrix format.

#include <stdio.h>
 
int main()
{
   int row, col, i, j, first[10][10], second[10][10], difference[10][10]; 
 
   scanf("%d%d", &row, &col);  /*No. of rows and cols entered from test case */
   
/* Get the first matrix from test case */
 
   for (i = 0; i < row; i++)
     for (j = 0 ; j < col; j++)
       scanf("%d", &first[i][j]);
 
/* Get the second matrix from test case */
 
   for (i = 0; i < row; i++)
     for (j = 0; j < col; j++)
         scanf("%d", &second[i][j]);
for(i=0;i<row;i++)
{
  for(j=0;j<col;j++)
  {
    difference[i][j]=first[i][j]-second[i][j];
  }
}
/*printing the difference array */
    for (i = 0; i < row; i++)
	{
    for (j = 0 ; j < col; j++){
    printf("%d\t",difference[i][j]);	   
	}
	printf("\n");
    }

}
