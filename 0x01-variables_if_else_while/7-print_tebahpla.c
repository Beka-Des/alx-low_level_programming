#include <stdio.h>

/**
  * main - displays alphabet in smallletter by using only putchar twice
  * reversly
  * Return: 0 when finish while loop
  */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;
	int initial = 0;

	while (i >= initial)
	{
		putchar(alphabet[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
