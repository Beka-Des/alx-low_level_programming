#include "main.h"
/**
  * _isdigit -  a function that checks for a digit (0 through 9).
  * @c: integer variable
  * Return: 1 if iput is digit else 0
  */
int _isdigit(int c)
{
	int min = '0';
	int max = '9';

	if (c >= min && c <= max)
		return (1);
	else
		return (0);
}
