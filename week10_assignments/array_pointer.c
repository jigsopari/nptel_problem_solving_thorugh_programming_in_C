#include <stdio.h>
#include <strings.h>
int main()
{
    char str[100];
    char *ptr;
    int  cntV,cntC;

    /* Read a string */
    scanf ("%s",str);
    
//assign address of str to ptr
ptr=str;

cntV=cntC=0;

while (*ptr != '\0')
{ 
  if(*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
    cntV++;
  else 
    cntC++;
  
  ptr++;
}
printf ("Total number of VOWELS:%d, CONSONANTS:%d",cntV,cntC);
return 0;
}
