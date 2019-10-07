#include "holberton.h"
/**
 * set_string - use a pointer to derefrence another string
 * @s: pointer to pointer of string
 * @to: pointer to string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
