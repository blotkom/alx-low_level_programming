#include "main.h"

/**
 * string_toupper - a fetters of a  string
 * to uppse
 * @s: an input strg
 * Return: char pointer td string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
