#include "main.h"

/**
 * _strcat - a functratenates two strings.
 * @dest: an inpfrfrut string
 * @src: an input string
 * Return: A pointer frfrto the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
