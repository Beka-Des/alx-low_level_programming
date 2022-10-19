#include "main.h"
/**
 *  times_table - a function that prints the 9 times table, starting with 0.
 *  Return: Nothing
 */
void times_table(void)
{
	int r, c, p;

	for (r = 0; r <= 9; r++)
	{
		_putchar(0);
		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');
			p = r * c;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
