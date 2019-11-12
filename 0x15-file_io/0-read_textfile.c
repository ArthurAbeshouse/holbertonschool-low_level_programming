#include "holberton.h"
/**
 * read_textfile - a text file and prints it to the POSIX standard out
 * @filename: const char type pointer to file to be read
 * @letters: bytes to print
`* Return: fdread
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fpread, fpwrite, fpclose;
	char *space;

	if (filename == NULL)
		return (0);

	space = malloc(sizeof(char) * letters);
	if (space == NULL)
		return (-1);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	fpread = read(fp, space, letters);
	if (fpread == -1)
		return (-1);

	fpwrite = write(STDOUT_FILENO, space, fpread);

	if (fpwrite == -1)
		return (-1);
	fpclose = close(fp);
	if (fpclose == -1)
		return (-1);

	return (fpread);
}
