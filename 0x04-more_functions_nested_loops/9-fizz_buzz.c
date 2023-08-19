#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: a program that print numbers 1 to 100 w/
 * Fizz for multiples of 3, Buzz for multiplesof 5,
 * and FizzBuzzfor multiples of both
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
		return (0);
}
