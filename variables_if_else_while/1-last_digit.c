#include <stdlib.h>
#include <time.h>
#include <stdio.h>/* more headers goes there */

/* betty style doc for function main goes there */
int main/*Betty compliant, this is the main function*/(void)
{
int n;
int lastD; /*create a variable for last digit*/

srand(time(0));
n = rand() - RAND_MAX / 2;
lastD = (n % 10);
 /**
 *n % 10 is modulo 10
 *divides the integar by 10
 *will always provide the last digit
 *Below code not indented for betty compliance!
 */
if (lastD > 5)
{
  /**
  *use %i instead of %d. %i autodetects the integar
  *first %i = variable n
  *second %i = lastD
  */
printf("Last digit of %i is %i and is greater than 5\n", n, lastD);
}
else if (lastD == 0)
{
printf("Last digit of %i is %i and is 0\n", n, lastD);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastD);
}
return (0);
}
