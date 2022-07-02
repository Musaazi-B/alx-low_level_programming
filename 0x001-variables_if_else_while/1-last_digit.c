#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
assign a random number to the variable n each time it is executed. 
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ",n);
if (n > S)
{
	printf("greater than S");
}
if (n == 0)
{
	printf("0");
}
if (n < 6 && n !=0)
{
	printf("less than 6 not 0");
}

print("\");

return (0);
}
