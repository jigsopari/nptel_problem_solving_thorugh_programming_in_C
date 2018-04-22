//Complete the C program to count total number of vowel or consonant in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],ch;
    int i=0, vowel, consonant;

    /* Input string from test case */
    while(ch != '\n')    /* terminates if user hit enter */
    {
        ch = getchar();
        s[i] = ch;
        i++;
    }
    s[i-1] = '\0';       /* inserting null character at end */
int j;
vowel =0;
consonant=0;
for(j=0;s[j] != '\0';j++)
{
  if((s[j] == 'A') || (s[j] == 'a') || (s[j] == 'E') || (s[j] == 'e') || (s[j] == 'I') || (s[j] == 'i') || (s[j] == 'O') || (s[j] == 'o') || (s[j] == 'U') || (s[j] == 'u'))
  {
    vowel++;
  }
  else if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
  {
    consonant++;
  }
}
printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);

}
