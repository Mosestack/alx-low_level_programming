#include "main.h"
/**
 * *_strcpy - copies a string from one pointer to another
 * @src: string 1 pointer to char
 * @dest:  string 2 pointer to char
 * Return: Character(dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
