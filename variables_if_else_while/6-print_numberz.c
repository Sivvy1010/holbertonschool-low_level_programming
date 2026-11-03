#include <stdio.h>/*Preprocess Headers to include functions like putchar*/

int main/*Initiate Main Function*/(void)/*void passes no argument*/
{
int i;/*Declare Variable i as an integer*/
for (i = 0; i < 10; i++)/*Initiate, Condition, Change Loop*/
{
putchar('0' + i);/*wrap the 0 in quotations to set as character code*/
}
putchar('\n');/*Print new line when loop is completed*/
return (0);/*Complete Program*/
}
