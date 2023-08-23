#include "main.h"

/**
 * reverse_arrverse an array.
 * @a: at array
 * @n: number os of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
