#include "main.h"
/**
  * _isalpha - a function that checks for alphabetic character.
  * @c: An input character
  *  Return: 1 if c is a letter, lowercase or uppercase,
  * 0 if otherwise
  */
int _isalpha(int c)
{
	char i, j;
	int k = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
				k = 1;
		}
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			if (i == c || j == c)
				k = 1;
		}
	}
	return (k);
}
