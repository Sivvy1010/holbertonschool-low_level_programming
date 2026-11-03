#include <stdio.h>/*Preprocess Header to include basic functions*/

int main/*Initiate Main Function*/(void)
{
int i;
  /**
   *Create a variable i
   *Create a for loop to have i begin at 0 and end at 9 with single increments
   *to have a comma and space inbetween the characters you need a condition statement
   *if i is greater than 0, print , and space. 
   *once the loop reaches 9 then if statement is false and stops
   *put i to screen
   *put newline
   *End Program
   */
for (i = '0'; i <= '9'; i++)
{
if (i > '0')
{
putchar(',');
putchar(' ');
}
putchar(i);
}
putchar('\n');
return (0);
}
