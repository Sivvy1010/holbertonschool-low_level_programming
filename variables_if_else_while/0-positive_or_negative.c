#include <stdio.h>
#include <time.h>
#include <stdlib.h> /* new header to include random */

int main/*starts main, the beginning of the program*/(void)
{
  /**
   *Betty compliant example
   *%d takes an integer value as a signed decimal integer
   *%i autodetects the value
   */
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
