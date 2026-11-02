#include <stdio.h> /*Preprocess header*/

int main/*Initiate the main program*/(void)
{
  /**
   *betty compliant no indentation
   *initialize a forloop to begin at 'a'
   *condition is met when the loop reaches 'z'
   *i++ is to increase the alphabet by 1 everytime
   *the loop runs
   *putchar = print the value of i to the screen
   *putchar '\n' to print a new line when loop is complete
   *end program
   */
for (int i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
return (0);
}
