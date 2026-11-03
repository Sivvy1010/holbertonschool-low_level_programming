#include <stdio.h>/*Preprocess Headers to include functions*/

int main/*Initiate Main function*/(void)
{
int i;/*Declares integar i as a variable*/
 /**
 *Create a for loop for i to begin at 0
 *Once i reaches 10 it ends the loop
 *i++ to increment each time the program loops
 *print the integars to the screen. %d = integars
 *putchar to complete program with a new line
 *End Program
 */
for (i = 0; i < 10; i++)
printf("%d", i);
putchar('\n');
return (0);
}
