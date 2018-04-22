

// 
Complete the code to find number of blank space in a sentence
#include <stdio.h>
int main()
{
   char s[1000], ch;
   int i = 0, count=0; /*i is array index and count is to count blank */
  
 /* Sentence is entered from test case */
    while(ch != '\n')    /* terminates if user hit enter */
    {
        ch = getchar();
        s[i] = ch;
        i++;
    }
    s[i-1] = '\0';       /* inserting null character at end */
	

int j=0;
for(j=0;j<i;j++)
{
  if(s[j] == ' ')
  {
    count++;
  }
}
printf("No. of blank space = %d", count);

}
