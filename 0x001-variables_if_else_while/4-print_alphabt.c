#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * program that prints the alphabet in lowercase, followed by a new line.
*/

int main(void)
{
Char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{

	if(ch != 'q' && ch != 'e')
{
 	       putchar(ch);
}

}
putchar(10);

return (0);
}

