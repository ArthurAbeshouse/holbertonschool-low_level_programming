#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - "putschar" prints the english alphabet in lowercase, except q & e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}

	return (0);
}
