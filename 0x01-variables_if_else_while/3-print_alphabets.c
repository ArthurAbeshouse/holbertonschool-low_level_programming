#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
* main - uses "putschar" to print the alphabet in lowercase and uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'i';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	
	return (0);
}
