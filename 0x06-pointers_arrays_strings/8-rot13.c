#include "holberton.h"
/**
 * rot13 - encodes a string by rotating the characters 13 spaces
 * @s: pointer to an array of words
 * Return: pointer encoded string
 */

char *rot13(char *s)
{
	int a, b;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; input[b] != '\0'; b++)
		{
			if (s[a] == input[b])
			{
				s[a] = output[b];
				break;
			}
		}
	}
	return (s);
}
