#include "main.h"

/**
 * _isalpha - a program that checks for alphabet
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for something else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
