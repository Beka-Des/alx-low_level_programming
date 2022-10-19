#include "main.h"
/**
 *  print_last_digit - a function that prints the last digit of a number.
 *  @num: input integer
 *  Return: The last digit of i
 */
int print_last_digit(int num)
{
	int i;

	if (num < 0)
		i = -1 * (num % 10);
	else
		i = num % 10;
	_putchar((i % 10) + '0');
	return (i % 10);
}
