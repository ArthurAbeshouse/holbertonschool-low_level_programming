#include "holberton.h"
/**
 * create_file - appends text at the end of a file
 * @filename: name of file to append
 * @text_content: name of file written
 * Return: 1 id successful, -1 if otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int append_file, len, wr_stat;

	if (filename == NULL)
		return (-1);

	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len]; len++)
		;
	wr_stat = write(append_file, text_content, len);
	close(append_file);
	return(-1);
}
