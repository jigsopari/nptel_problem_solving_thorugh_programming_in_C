#include <stdio.h>
int isPrime(int num); /* Write this function in the editable section. It returns 0 is the number
is not Prime and returns 1 if the number is prime */

void printPrimes(int lowerLimit, int upperLimit)
{
   while(lowerLimit <= upperLimit)
    {
       if(isPrime(lowerLimit)) 

        {
            printf("%d  ", lowerLimit);
        }

        lowerLimit++;
    }
}
int isPrime(int num)
{
  int i,count = 0;
  for (i=1 ; i <= num;i++)
  {
    if(num % i == 0)
    {
      count++;
    }
  }
  if( count == 2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
  
}
  

int main()
{
    int lowerLimit, upperLimit;

scanf("%d %d", &lowerLimit, &upperLimit);
/*Starting and ending number is taken from test case */

    printPrimes(lowerLimit, upperLimit);
}
