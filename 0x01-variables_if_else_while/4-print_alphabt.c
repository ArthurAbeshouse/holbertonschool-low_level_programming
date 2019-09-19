#include <stdio.h>
#include <stdlib.h>
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
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}

	return (0);
}
