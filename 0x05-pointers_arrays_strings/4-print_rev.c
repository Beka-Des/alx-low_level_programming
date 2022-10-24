#include "main'h"
/**
 * print_rev -  a function that
 * prints a string, in reverse, followed by a new line
 * @s: An input character
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;
	int i;

	while (s[len] != '\0')
		len++;
	for(i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
