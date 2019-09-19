#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
* main - uses if statements to determine if n is greater than or less than 0.
*
* Return: Always 1 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("0 is zero");
	}
	return (0);
}
