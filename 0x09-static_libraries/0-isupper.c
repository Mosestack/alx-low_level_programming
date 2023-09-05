#include "main.h"

/**
 * _isupper - a program that checks for uppercase character
 * @c:The character to be checked
 * Return: 1 for uppercase character or 0 for others
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
