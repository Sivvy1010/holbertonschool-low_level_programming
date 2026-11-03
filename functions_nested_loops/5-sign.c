#include "main.h" /*import header file for functions */

int print_sign/*Initialize print_sign function*/(int n)
 /**
  * Prototype int print_sign(int n)
  * n is the integar
  * Returns 1 and prints + if n is greater than zero
  * Returns 0 and prints 0 if n is zero
  * Returns -1 and prints - if n is less than zero
 */
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
