#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strcat - a function that concatenates two strings.
  * @dest: character variable
  * @src: character variable
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	/* make `ptr` point to the end of the destination string*/
	char *ptr = dest + strlen(dest);
	/* appends characters of the source to the destination string*/
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	/* null terminate destination string*/
	*ptr = '\0';
	/* the destination is returned by standard `strcat()`*/
	return (dest);
}
