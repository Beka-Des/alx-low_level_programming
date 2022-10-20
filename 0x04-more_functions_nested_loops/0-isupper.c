#include "main.h"
/**
  * _isupper - a function that checks for uppercase character.
  * @c: integer variable
  * Return: 1 for uppercase else 0
  */
int _isupper(int c)
{
	char a = 'A';
	char z = 'Z';

	if (c >= a && c <= z)
		return (1);
	else
		return (0);
}
