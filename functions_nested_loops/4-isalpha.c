#include "main.h" /*Import Header File for functions */

int _isalpha/*Initialize isalpha function*/(int c)
{
  /**
 * Use of Betty compliance
 * we want to check whether all character from a - z are lowercase
 * function provides variable as integar
 * return a 1 is true
 * return a 0 if false
 * if c is greater than or equal to 'a'
 * if c is less than or equal to 'z'
 * return (1) true. islower
 * if not return (0) false.
 * && means "AND" where both conditions must be true.
 * || means "OR" to check both statements
 * so lowercase range or the uppercase range can match.
 */
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
