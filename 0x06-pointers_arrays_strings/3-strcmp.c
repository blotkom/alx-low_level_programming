#include "main.h"

/**
 * _strcmp - a funompares two strings.
 * @s1: an inring
 * @s2: an input string
 * Return: Thefence s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
