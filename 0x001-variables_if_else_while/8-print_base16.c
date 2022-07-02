#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *progra  that prints all single digit number of base 10 starting form 0, followed
 a new line.
*/

int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
	putchar(n);
}
for (ch = 'a'; ch >= 'f'; ch)
{
        putchar(ch);
}

putchar(10);

return (0);
}

