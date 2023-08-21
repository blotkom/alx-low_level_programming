#include "main.h"

/**
 * swap_int -  a functioerfneerferfer the values of two integers.
 * @a: an inout interferferffeger pointferferferfer
 * @b: an input intferfrefeger poiferferferfernter
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
