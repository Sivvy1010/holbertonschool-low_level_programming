#include <stdio.h>/*Preprocess Header to include basic functions*/

int main/*Initiate Main Function*/(void)
{
int i;
  /**
   */
for (i = '0'; i <= '9'; i++)
{
if (i > '0')
{
putchar(',');
putchar(' ');
}
putchar(i);
}
putchar('\n');
return (0);
}
