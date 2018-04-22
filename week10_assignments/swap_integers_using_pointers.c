#include <stdio.h>
void swap(int *num1, int *num2)
{
  int temp;
  temp= *num2;
  *num2=*num1;
  *num1 =temp;
  
}
int main()
{
    int num1,num2;
     
    scanf("%d",&num1); /*Enter value of num1 */
    scanf("%d",&num2); /*Enter value of num1 */
     
    swap(&num1,&num2);
     
    /*print values after swapping */
    printf("num1=%d, num2=%d\n",num1,num2);    
     
    return 0;
}
