#include "main.h"
#include <string.h>
/**
  * _strncat - a function that concatenates two strings.
  * @dest: character variable
  * @src: character variable
  * @n: integer variable
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
