#include "main.h" /*Preprocess our main function*/

void print_alphabet_x10/*Initialize Function in main.h*/(void)
{
char j;/* create variable for alphabet*/
int i;/* create variable for integar loop*/

for (i = 0; i < 10; i++)/* a for loop to loop the output 10 times*/
{
for (j = 'a'; j <= 'z'; j++)/*a loop inside the 10x loop to print alphabet*/
{
_putchar(j);/*print output of j "alphabet"*/
}
}
_putchar('\n');/*print new line when completed*/
}
