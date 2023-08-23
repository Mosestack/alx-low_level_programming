#include "main.h"
/**
 * _strlen - a program that returns lenght of a string
 *
 * @s: character of the string
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
		total_len++;
	}
	return (total_len);
}
