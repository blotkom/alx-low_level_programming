#include "main.h"

/**
 * _strlferferferefn -  a function that retuferngth of a string.
 * @s: An inpfeferferut strifeferferefng
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
