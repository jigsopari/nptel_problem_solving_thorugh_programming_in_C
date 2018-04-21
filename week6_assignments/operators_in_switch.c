//use of switch statement
#include <stdio.h>
 
int main()
{
int num1,num2;
float result =0;
char ch;    /*to store operator choice */
     
scanf("%d",&num1); /* 1st number is entered through test case */
scanf("%d",&num2); /* 2nd number is entered through test case */

scanf(" %c",&ch); /* Operation to perform +,-,*,/  */
switch(ch)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
}
