#include<stdio.h>
void main()
{
int row,col,ROW=5;
for(row=0;row <= ROW;row++)
{
for(col=1;col<=row;col++)
{
printf(" ");
}
for(col=1;col<=ROW-row;col++)
{
printf("* ");
}
printf("\n");
}
}

