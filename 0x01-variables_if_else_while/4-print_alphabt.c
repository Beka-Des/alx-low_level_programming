#include <stdio.h>

/**
  * main - prints the alphabet in lowercase, followed by a new line
  * Print all the letters except q and e
  * Return: 0 when finish while loop
  */
int main(void)
{
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;
	int array_size = 23;

	while (i <= array_size)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
