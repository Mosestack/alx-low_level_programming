#include "main.h"
#include <string>
/**
 * _puts_recursion - a function that prints a string
 * followed by a new line
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
     if (*s != '\0')
     {
	    _putchar(*s);
	   _pits_recursion(s + 1);
     }
    if (*s == '\0')
    {
	   _putchar('\n')
    }
} 
