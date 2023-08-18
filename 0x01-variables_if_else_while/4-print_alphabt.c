#include <stdio.h>
/**
 * main a program that prints lowercase alphabets excluding e and q
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch++;
		}
	putchar('\n');
	return (0);
}
