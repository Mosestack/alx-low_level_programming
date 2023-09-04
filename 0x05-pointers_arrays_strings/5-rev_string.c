#include "main.h"
/**
 * rev_string - a function that prints a reversed string
 * @s: String to be reversed
 * character of reversed string
 * Return: mothing (success)
 */
void rev_string(char *s)
{
	int length, i;
	char temp;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
