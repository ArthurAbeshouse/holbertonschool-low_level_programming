#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
* main - uses if statements to determine if n is greater than or less than 0.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6", n, n % 10);
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	return (0);
}