#include "holberton.h"
/**
 * helper - checks the input number from n to the result
 * @n: number is squared and compared against result
 * @result: number to check
 * Return: natural square root of number base
 */

int helper (int n, int result)
{
	if (n * n == result)
		return (n);
	else if (n * n > result)
		return (-1);
	return (helper(n + 1, result));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
