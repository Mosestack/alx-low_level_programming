#include "main.h"
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings 2
 * @src: first param
 * @dest: second param
 * @n: third param
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
