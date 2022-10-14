#include <stdio.h>

/**
  * main - displays alphabet in smallletter and then in capital letter by using
  * only putchar twice
  * Return: 0 when finish while loop
  */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int array_size = 51;

		while (i <= array_size)
		{
			putchar(alphabet[i]);
			i++;
		}
	putchar('\n');
	return (0);
}
