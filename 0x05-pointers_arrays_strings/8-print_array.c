#include "main.h"
#include <stdio.h>

/**
 * print_array - a functionfrefer ferferfthat prints n efreferferferferferlements of an array of integers,
 * followeferferferferd by a new lferferfeeine.
 * @a: an input arrayfrefrefer
 * @n: an input integerfreferfer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
