#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - uses if statements to determine if n is greater than or less than 0.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %i is %i and is 0\n", n, l);
	else
		printf("Last digit of %i is %i and is less than 6\n", n, l);

	putchar('\n');
	return (0);
}
