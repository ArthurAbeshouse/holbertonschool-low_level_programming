#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - uses "putschar" to print the english alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	return (0);
}
