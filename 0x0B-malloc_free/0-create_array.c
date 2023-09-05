#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function tharray of chars,
 * and initializescific char.
 * @size: The size of the array
 * @c: A character to ined the array
 * Return: Apointer to the it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
