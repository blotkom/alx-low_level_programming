#include <stdlib.h>

/**
 * int_index - a fu an integer.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare w array
 * Return: The index of the firsmp function
 * does not return 0; -1 if no ele or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
