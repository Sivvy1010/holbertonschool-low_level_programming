#include <stdio.h>/*Preprocess Headers to include standard library*/

int main/*Initiate Main Function*/(void)/*void add no argument*/
{
char i;/*set variable i as a character*/
  /**
   *create a for loop to being at 'z'
   *make i(z) greater than or equal to a
   *use i-- (-- means previous) we are adding to get our value
   *therefore we need to go to the previous value from z
   *which will make our reverse alphabet work
   *putchar(i) once completed our loop print i
   *putchar(\n) once finished loop print a newline
   *End Program
   */
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
