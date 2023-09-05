#include "main.h"
/**
 * _memcpy -function copies on bytes from memroy area src
 * to memory area dest
 * @src: bytes from memory area
 * @dest: bytes from memory area
 * @n: memory to copy
 * Return: a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
