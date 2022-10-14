#include <stdio.h>

/**
  * main - displays alphabet in smallletter by using only putchar twice
  * Return: 0 when finish while loop
  */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int array_size = 25;

	while (i <= array_size)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
