#include "main.h"
/**
 * *_strchr - a function that locates character in a string
 * @c: occurence of character to be copied
 * @s: the string to be searced
 * Return: a pointer s if c is found or
 * NULL if c not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s = index);
	}

	return ('\0');
}
