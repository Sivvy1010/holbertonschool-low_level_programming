#include "main.h"/*Import main.h prototype functions*/
 /**
 *Initialize the function named print alphabet
 *The first void means returns no value
 *the void inside the parentheses takes no arguments.
 *Use a for loop to print alphabet in order
 *print output to screen
 *print a new line
 */

void print_alphabet/*Initialized function*/(void)
{
char i;/*creates a variable named i*/
for (i = 'a'; i <= 'z'; i++)
_putchar(i);/*use the function from our prototype function in main.h*/
_putchar('\n');
}
