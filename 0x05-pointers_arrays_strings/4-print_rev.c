#include "main.h"
/**
 * print_rev - a program that prints a stringg in
 * reverse, followed by a new line
 *
 * @s: character of a string to be reversed
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
