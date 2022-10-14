#include <stdio.h>

/**
  * main - rints all the numbers of base 16 in lowercase, followed by a new
  * line.
  * Return: 0 when finish while loop
  */
int main(void)
{
	char alphabet[] = "0123456789abcdef";
	int i = 0;
	int array_size = 15;

	while (i <= array_size)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
