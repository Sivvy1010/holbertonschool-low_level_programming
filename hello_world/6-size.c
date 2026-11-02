#include <stdio.h>
int main/*This is the main function that begins the program*/(void)
{
/*This prints the size of various types*/
printf("The size of char is %zu byte(s)\n", sizeof(char));
printf("The size of int is %zu byte(s)\n", sizeof(int));
printf("The size of long int is %zu byte(s)\n", sizeof(long int));
printf("The size of long long int is %zu byte(s)\n", sizeof(long long int));
printf("The size of float is %zu byte(s)\n", sizeof(float));
return (0);
}
