#include "main.h"
#include <stddef.h>
/**
  * _strncpy - a function that concatenates two strings.
  * @dest: character variable
  * @src: character variable
  * @n: integer variable
  * Return: ptr
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	if (dest == NULL)
	{
		return NULL;
	}


	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return ptr;
}
