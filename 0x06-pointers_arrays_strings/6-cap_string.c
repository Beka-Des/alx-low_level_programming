#include "main.h"
/**
  * cap_string - changes all lowercase letters of a string to uppercase.
  * @x: pointer to string.
  *
  *Return: pointer to uppercase string.
  */
char *cap_string(char *x)
{
	int length;

	length = 0;

	while (x[length] != '\0')
	{
		if (x[length] >= 97 && x[length] <= 122)
		{
			x[length] = x[length] - 32;
		}
		length++;
	}
	return (x);
}
