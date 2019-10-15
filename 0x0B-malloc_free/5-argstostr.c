#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - unction that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: pointers to a new string or NULL if false
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int a, b, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
			;
	}
	ptr = malloc(sizeof(char) * (c + ac + 1));
	if (ptr == NULL)
		return (NULL);
	for (a = 0, c = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
			ptr[c] = av[a][b];
		ptr[c] = '\n';
		c++;
	}
	return (ptr);
}
