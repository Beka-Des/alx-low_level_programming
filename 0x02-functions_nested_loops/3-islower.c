#include "main.h"
/**
  * _islower - a function that checks for lowercase character.
  * @c: input character
  * Return: 1 if c is lowercase or 0 otherwise
  */
int _islower(int c)
{
	char i;
	int j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			j = 1;
	}
	return (j);
}
