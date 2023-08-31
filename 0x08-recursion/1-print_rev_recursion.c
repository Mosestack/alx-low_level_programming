#include "main.h"
/**
 * _print_rev_recursion - Prints reverse of a string
 * @s: param of the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
