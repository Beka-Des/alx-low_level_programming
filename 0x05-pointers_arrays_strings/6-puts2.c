#include "main.h"
/**
 * puts2 - a function that prints every other
 * character of a string, starting with the
 *  first character, followed by a new line.
 *  @str: An input character
 *  Return: Nothing
 */
void puts2(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string+=2;
	}
	_putchar('\n');
}
