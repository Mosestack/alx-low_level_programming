#include "main.h"
/**
 * sqrt_a - returns the natural square root of a number
 * @a: a given number
 * @b: iterator
 * Return: natural square root of a number or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}