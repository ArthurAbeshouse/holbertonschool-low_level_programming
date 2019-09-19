#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - uses "putschar" to print the english alphabet in lowercase, backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
