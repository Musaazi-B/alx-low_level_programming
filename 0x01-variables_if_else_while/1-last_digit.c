#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: always return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is", n);
if (n > 5)
{
printf("greater than 5");
}
if (lastn == 0)
{
printf("0");
}
if (n < 0 && n != 0)
{
printf("Less than 6 not 0");
}
printf('\n');
return (0);
}
