#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - uses "putschar" to print the english alphabet in lowercase, backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	return (0);
}
