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
int i;
int j;
for (i = 10; i <= 19; i++)
{
for (j = 10; j <= 19; j++)
{
if ((j % 10) > (i % 10))
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i != 56 || j != 57)
{
putchar(',');
putchar('');
}
}
}
}
putchar('\n');
return (0);
}
