include<stdio.h>
 
void tranpose();
void getmatrix();
int check();
 
int m, n, rows, columns;
int matrix[3][3], transpose[3][3];
void getmatrix()
{
  for(rows=0;rows<m;rows++)
  {
    for(columns=0;columns<n;columns++)
    {
      scanf("%d",&matrix[rows][columns]);
    }
  }
}
void tranpose()
{
  for(rows=0;rows<m;rows++)
  {
    for(columns=0;columns<n;columns++)
    {
      transpose[rows][columns]=matrix[columns][rows];
    }
  }
}

int check()
{
  int x=0;
  for(rows=0;rows<n;rows++)
  {
    for(columns=0;columns<m;columns++)
    {
      if(-matrix[rows][columns] == transpose[rows][columns])
        x=0;
      else 
        x=-1;
    }
  }
  return x;
}
int main()
{
      int x;
      scanf("%d", &m); /*Enter the Number of Rows: */
      scanf("%d", &n); /*Enter the Number of Columns: */
      getmatrix();  /*Get the Elements of the Square Matrix from input case */
      tranpose(); /*Function to perform transpose of the matrix */
      x = check(); /*To check if the matrix is a skewed symmetric matrix */
      if(x == 0)
      {
            printf("The Entered Matrix is A Skewed Symmetric Matrix\n");
      }
      else
      {
            printf("The Entered Matrix is Not A Skewed Symmetric Matrix\n");
      }
      return 0;
}
