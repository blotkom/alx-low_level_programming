#include "main.h"

/**
 * puts_half - a functiorintferferfering, followed by a new line.
 * @str: An input stringferferfre
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
