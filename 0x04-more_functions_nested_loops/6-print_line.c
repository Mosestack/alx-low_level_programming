#include "main.h"
/**
 * print_line - a program that prints a straight line
 * @n: number of times
 * Return: 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
