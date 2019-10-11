#include "stdio.h"
/**
 * main - program to print out number of arguments
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: void
 */

int main(int argc, char **argv __attribute__((unused)))
{
	(void)argv;

	printf("%d\n", argc - 1);
	return(0);
}
