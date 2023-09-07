#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A ftes memory using malloc.
 * @b: An unsigned  integer
 * Return: Apointer to allocor NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
