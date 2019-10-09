#include "holberton.h"
#include <stdio.h>
/**
 * prime_num_check - checks recursively is the input from
 * is_prime_number is prime.
 * @i: iterator
 * @s: number to check
 * Return: 1 if i is a prime, else return 0 otherwise
 */

int prime_num_check(int i, int s)
{
	if (s % i == 0 || s < 2)
		return (0);
	else if (i == s - 1)
		return (1);
	else if (s > i)
		return (prime_num_check(i + 1, s));
	return (1);
}
/**
 * is_prime_number - checks if the number is a prime number
 * @n: the number to check
 * Return: 1 if i is a prime, else return 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_num_check(2, n));
}
