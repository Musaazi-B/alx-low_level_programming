#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * program that prints the alphabet in lowercase, followed by a new line.
*/

int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
        putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
	putchar(ch);
}
putchar(10);

return (0);
}

