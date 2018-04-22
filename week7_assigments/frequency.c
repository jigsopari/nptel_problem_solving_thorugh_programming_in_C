//C program to count frequency of each element of an array. Frequency of a particular element will be printed once.

#include <stdio.h>
int main()
{
    int arr[50], freq[50]; /* Array arr[50] stores the elements and freq[50] stores the no. of times the element occurs */
    int size, i, j, count;

    /* size of array is taken from the test case */
    scanf("%d", &size);

    /* Elements of the array is taken from test case */
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; 
        
/* all frequencies are initialized to -1 which will be changed to specific value after counting no. of occurrence */
/* for the element which is already counted the corresponding frequency will be made 0 */ 
    }
for(i=0;i<size;i++)
{
  count= 1;
  for(j=i+1;j<size;j++)
  {
    if(arr[i] == arr[j])
       {
        
        freq[j]=0;
        count++;
         
       }
    if(freq[i] != 0)
    {
       freq[i]=count;
    }
  }
}

   /* Print frequency of each element */

    for(i=0; i<size; i++)
    {
        if(freq[i] != 0) /* The element with corresponding frequency 0 means duplicate occurrence of the element */
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

}
