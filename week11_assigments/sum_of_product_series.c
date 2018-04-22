//f(n)= (1) + (2*3) + (4*5*6) 

#include <stdio.h>
int seriesSum(int calculated, int current, int N)
{
    int i, cur = 1;
 
    // checking termination condition
    if (current == N + 1) 
        return 0;
  
    // product of terms till current
    for (i = calculated; i < calculated + current; i++)
        cur *= i; 
 
    // recursive call for adding terms next in the series
    return cur + seriesSum(i, current + 1, N); 
}
 
int main()
{
    int N;
    scanf("%d", &N); /* Enter number to terms N to be calculated */
    /* Write the function int seriesSum(int calculated, int current, int N) which finds the sum of the series
using recursion.  calculated - number of terms till which sum of terms has 
been calculated; current - number of terms for which sum has to be calculated; N - Number of terms in the function to be calculated
*/
    printf("%d\n", seriesSum(1, 1, N));
    return 0;
}
