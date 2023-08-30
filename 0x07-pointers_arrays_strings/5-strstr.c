#include "main.h"
/**
 * *_strstr - a function that locates a substring
 * @needle: Substring to be located
 * @haystack:location of thre substring
 * Return:If found - a pointer to the beginning of
 * the located substring
 * If not found - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == u '\0')
				return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
