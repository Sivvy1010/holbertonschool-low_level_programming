#include <stdio.h>/*Preprocess Headers included*/

int main/*initiate main function*/(void)
{
int i;/*declares an integar used as the loop counter*/
 /**
 *for loop starts i at charact a
 *repeats everytime until it reaches z
 * i++ means to increment each time the loop starts
 *!= means NOT. If q nor e are true, the != generates false
 *conditions must be true to be printed.
 *putchar(i) = prints i
 *putchar('\n') = prints newline
 *return indicates program finished successfully
 */
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
putchar(i);
}
putchar('\n');
return (0);
}
