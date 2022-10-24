#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The integer to be reversed
 * This programme was written by Al-Areef,
 * on the 24th of october 2022
 * Return: Nothing
 */

void rev_string(char *s)
{
	int x = 0, y = 0;
	char i;

	while (s[x] != '\0')
		x++;

	while (y < x--)
	{
		i = s[y];
		s[y++] = s[x];
		s[x] = i;
	}
}
