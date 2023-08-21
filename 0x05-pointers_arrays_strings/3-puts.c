#include "main.h"

/**
 * _puts - Write aferferferf erferfefunctioferfern that prints a string, followed
 * by a new line, to stdouferferferferft.
 * @str: an input stferferferfefering
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
