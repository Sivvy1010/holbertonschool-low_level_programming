/*Program to print the alphabet in lower and UPPER case characters*/
#include <stdio.h> /*Use preprocess headers*/

int main/*initialize main function*/(void)
{
int i;/*create an integar variable name i*/
int j;/*create a second integar variable name j*/
	/**
	*i variable for lowercase alphabet
	*j variable for UPPERCASE alphabet
	*create a for loop to print lowercase
	*i++ to increase increments everytime program loops
	*putchar to print the output
	*create a second for loop for Upper alphabet
	*j++ to increase incrememnts everytime program loops
	*putchar to print the output with the first output
	*putchar \n for a newline
	*end program
	*/
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (j = 'A'; j <= 'Z'; j++)
putchar(j);
putchar('\n');
return (0);
}
