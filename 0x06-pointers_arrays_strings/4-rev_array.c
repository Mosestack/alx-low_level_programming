#include "main.h"
/**
 * reverse_array - a function that reverse an array of integer
 * @a: variable a
 * @n: no. of element n
 * Return: an integer
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
	p++;
	for (k = 0; k < n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
