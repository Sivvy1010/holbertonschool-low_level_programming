#include "main.h" /*Preprocess to include main.h functions*/

int _islower/*Initialize islower function from main*/(int c);
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
 * && means "and" where both conditions must be true.
 */
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
