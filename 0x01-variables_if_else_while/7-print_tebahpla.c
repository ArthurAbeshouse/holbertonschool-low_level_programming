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
	char ch = 'a';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	return (0);
}