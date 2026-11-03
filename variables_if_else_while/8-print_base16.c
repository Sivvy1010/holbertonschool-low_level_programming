#include <stdio.h>/*Preprocess Headers to include basic functions*/

int main/*Initiate Main Function*/(void)
{
  /**
   *No Indentation for Betty Compiance
   *Create Variable i as character
   *Run a for loop for 0 - 9
   *increment everytime i loops
   *once loop reaches 9 loop ends
   *put output to i
   *Create another for loop using a - f for lowercase
   *increment everytime i loops
   *once loop reaches F it ends
   *put output to i
   *put new line to output
   *End program
   */
char i;
for (i = '0'; i <= '9'; i++)
putchar(i);
{
for (i = 'a'; i <= 'f'; i++)
putchar(i);
}
putchar('\n');
return (0);
}
