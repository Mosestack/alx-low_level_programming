#include "main.h"
/**
 * swap_int - a function that swap the value of two integers
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Retun: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}

