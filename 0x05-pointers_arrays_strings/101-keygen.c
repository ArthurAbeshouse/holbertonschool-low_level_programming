#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates a random password for 101-crackme
 * Return: 0
 */
int main(void)
{
	int unlock, password;

	srand(time(NULL));
	unlock = 2772;
	while (unlock >= 127)
	{
		password = (rand() % 126) + 1;
		printf("%c", password);
		unlock -= password;
	}

	printf("%c", unlock);
	return (0);
}
